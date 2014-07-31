package de.fhg.iais.roberta.ast.syntax.stmt;

import java.util.Locale;

import de.fhg.iais.roberta.ast.syntax.Phrase;
import de.fhg.iais.roberta.ast.syntax.expr.Expr;
import de.fhg.iais.roberta.dbc.Assert;
import de.fhg.iais.roberta.dbc.DbcException;

/**
 * This class represents the <b>repeat statement</b> blocks from Blockly into the AST (abstract syntax
 * tree).
 * Object from this class will generate repeat statement statement.<br/>
 * <br>
 * See {@link #getMode()} for the kind of the repeat statements.
 */
public class RepeatStmt extends Stmt {
    private final Mode mode;
    private final Expr expr;
    private final StmtList list;

    private RepeatStmt(Mode mode, Expr expr, StmtList list) {
        super(Phrase.Kind.REPEAT_STMT);
        Assert.isTrue(expr.isReadOnly() && list.isReadOnly());
        this.expr = expr;
        this.list = list;
        this.mode = mode;
        setReadOnly();
    }

    /**
     * Create read only object of {@link RepeatStmt}.
     * 
     * @param mode of the repeat statement. See enum {@link Mode} for all possible modes.
     * @param expr that should be evaluated
     * @param list of statements
     * @return read only object of {@link RepeatStmt}
     */
    public static RepeatStmt make(Mode mode, Expr expr, StmtList list) {
        return new RepeatStmt(mode, expr, list);
    }

    /**
     * @return mode of the repeat statement. See enum {@link Mode} for all possible modes.
     */
    public Mode getMode() {
        return this.mode;
    }

    /**
     * @return expression that should be evaluated.
     */
    public final Expr getExpr() {
        return this.expr;
    }

    /**
     * @return list of statements.
     */
    public final StmtList getlist() {
        return this.list;
    }

    @Override
    public void generateJava(StringBuilder sb, int indentation) {
        int next = indentation + 3;
        appendNewLine(sb, indentation, null);
        switch ( this.mode ) {
            case UNTIL:
            case WHILE:
                sb.append("while ( ");
                this.expr.generateJava(sb, 0);
                sb.append(" ) {");
                break;
            case FOR:
                sb.append("for (");
                this.expr.generateJava(sb, indentation);
                sb.append(" ) {");
                break;
            case FOR_EACH:
                break;
            case TIMES:
                sb.append("for ( int i = 0; ");
                this.expr.generateJava(sb.append("i < "), 0);
                sb.append("; i++ ) {");
                break;
            default:
                break;
        }
        //        sb.append("(repeat [" + this.mode + ", ").append(this.expr).append("]");
        this.list.generateJava(sb, next);
        appendNewLine(sb, indentation, "}");
    }

    @Override
    public String toString() {
        StringBuilder sb = new StringBuilder();
        appendNewLine(sb, 0, null);
        sb.append("(repeat [" + this.mode + ", ").append(this.expr).append("]");
        sb.append(this.list.toString());
        appendNewLine(sb, 0, ")");
        return sb.toString();
    }

    /**
     * Modes in which the repeat statement can be set.
     * 
     * @author kcvejoski
     */
    public static enum Mode {
        WHILE(), UNTIL(), TIMES(), FOR(), FOR_EACH();

        private final String[] values;

        private Mode(String... values) {
            this.values = values;
        }

        /**
         * get mode from {@link Mode} from string parameter. It is possible for one mode to have multiple string mappings.
         * Throws exception if the mode does not exists.
         * 
         * @param name of the mode
         * @return mode from the enum {@link Mode}
         */
        public static Mode get(String s) {
            if ( s == null || s.isEmpty() ) {
                throw new DbcException("Invalid mode symbol: " + s);
            }
            String sUpper = s.trim().toUpperCase(Locale.GERMAN);
            for ( Mode mo : Mode.values() ) {
                if ( mo.toString().equals(sUpper) ) {
                    return mo;
                }
                for ( String value : mo.values ) {
                    if ( sUpper.equals(value) ) {
                        return mo;
                    }
                }
            }
            throw new DbcException("Invalid mode symbol: " + s);
        }
    }

}
