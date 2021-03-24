// This file is automatically generated by the Open Roberta Lab.
#define _ARDUINO_STL_NOT_NEEDED
#include "SenseBoxMCU.h"
#undef max
#undef min
#include <NEPODefs.h>
#include <stdlib.h>



void math();
void lists();

inline bool _isPrime(double d);


double ___numVar;
bool ___boolVar;
String ___stringVar;
unsigned int ___colourVar;
std::list<double> ___numList;
std::list<bool> ___boolList;
std::list<String> ___stringList;
std::list<unsigned int> ___colourList;


void math() {
    Serial.println(___numVar + ___numVar);
    Serial.println(___numVar - ___numVar);
    Serial.println(___numVar * ___numVar);
    Serial.println(___numVar / ((float) ___numVar));
    Serial.println(pow(___numVar, ___numVar));
    Serial.println(sqrt(___numVar));
    Serial.println(abs(___numVar));
    Serial.println(- (___numVar));
    Serial.println(log(___numVar));
    Serial.println(log10(___numVar));
    Serial.println(exp(___numVar));
    Serial.println(pow(10.0, ___numVar));
    Serial.println(sin(M_PI / 180.0 * (___numVar)));
    Serial.println(cos(M_PI / 180.0 * (___numVar)));
    Serial.println(tan(M_PI / 180.0 * (___numVar)));
    Serial.println(180.0 / M_PI * asin(___numVar));
    Serial.println(180.0 / M_PI * acos(___numVar));
    Serial.println(180.0 / M_PI * atan(___numVar));
    Serial.println(M_PI);
    Serial.println(M_E);
    Serial.println(M_GOLDEN_RATIO);
    Serial.println(M_SQRT2);
    Serial.println(M_SQRT1_2);
    Serial.println(M_INFINITY);
    Serial.println((fmod(___numVar, 2) == 0));
    Serial.println((fmod(___numVar, 2) != 0));
    Serial.println(_isPrime(___numVar));
    Serial.println((___numVar == floor(___numVar)));
    Serial.println((___numVar > 0));
    Serial.println((___numVar < 0));
    Serial.println((fmod(___numVar,___numVar) == 0));
    ___numVar += ___numVar;
    Serial.println(round(___numVar));
    Serial.println(ceil(___numVar));
    Serial.println(floor(___numVar));
    Serial.println(_getListSum(___numList));
    Serial.println(_getListMin(___numList));
    Serial.println(_getListMax(___numList));
    Serial.println(_getListAverage(___numList));
    Serial.println(_getListMedian(___numList));
    Serial.println(_getListStandardDeviation(___numList));
    Serial.println(_getListElementByIndex(___numList, 0));
    Serial.println(fmod(___numVar, ___numVar));
    Serial.println(std::min(std::max((double) ___numVar, (double) ___numVar), (double) ___numVar));
    Serial.println(_randomIntegerInRange(___numVar, ___numVar));
    Serial.println(((double) rand() / (RAND_MAX)));
}

void lists() {
    ___numList = {};
    ___numList = {0, 0, 0};
    ___numList = _createListRepeat(___numVar, (double) ___numVar);
    Serial.println(((int) ___numList.size()));
    Serial.println(___numList.empty());
    Serial.println(_getFirstOccuranceOfElement(___numList, ___numVar));
    Serial.println(_getLastOccuranceOfElement(___numList, ___numVar));
    Serial.println(_getListElementByIndex(___numList, ___numVar));
    Serial.println(_getListElementByIndex(___numList, ___numList.size() - 1 - ___numVar));
    Serial.println(_getListElementByIndex(___numList, 0));
    Serial.println(_getListElementByIndex(___numList, ___numList.size() - 1));
    Serial.println(_getAndRemoveListElementByIndex(___numList, ___numVar));
    Serial.println(_getAndRemoveListElementByIndex(___numList, ___numList.size() - 1 - ___numVar));
    Serial.println(_getAndRemoveListElementByIndex(___numList, 0));
    Serial.println(_getAndRemoveListElementByIndex(___numList, ___numList.size() - 1));
    _removeListElementByIndex(___numList, ___numVar);
    _removeListElementByIndex(___numList, ___numList.size() - 1 - ___numVar);
    _removeListElementByIndex(___numList, 0);
    _removeListElementByIndex(___numList, ___numList.size() - 1);
    _setListElementByIndex(___numList, ___numVar, ___numVar);
    _setListElementByIndex(___numList, ___numList.size() - 1 - ___numVar, ___numVar);
    _setListElementByIndex(___numList, 0, ___numVar);
    _setListElementByIndex(___numList, ___numList.size() - 1, ___numVar);
    _insertListElementBeforeIndex(___numList, ___numVar, ___numVar);
    _insertListElementBeforeIndex(___numList, ___numList.size() - 1 - ___numVar, ___numVar);
    _insertListElementBeforeIndex(___numList, 0, ___numVar);
    ___numList.push_back(___numVar);
    ___numList = _getSubList(___numList, ___numVar, ___numVar);
    ___numList = _getSubList(___numList, ___numList.size() - 1 - ___numVar, ___numVar);
    ___numList = _getSubList(___numList, 0, ___numVar);
    ___numList = _getSubList(___numList, ___numVar, ___numList.size() - 1 - ___numVar);
    ___numList = _getSubList(___numList, ___numList.size() - 1 - ___numVar, ___numList.size() - 1 - ___numVar);
    ___numList = _getSubList(___numList, 0, ___numList.size() - 1 - ___numVar);
    ___numList = _getSubList(___numList, ___numVar, ___numList.size() - 1);
    ___numList = _getSubList(___numList, ___numList.size() - 1 - ___numVar, ___numList.size() - 1);
    ___numList = _getSubList(___numList, 0, ___numList.size() - 1);
}

void setup()
{
    Serial.begin(9600);
    
    ___numVar = 0;
    ___boolVar = true;
    ___stringVar = "";
    ___colourVar = RGB(0xFF, 0xFF, 0xFF);
    ___numList = {0, 0, 0};
    ___boolList = {true, true, true};
    ___stringList = {"", "", ""};
    ___colourList = {RGB(0xFF, 0xFF, 0xFF), RGB(0xFF, 0xFF, 0xFF), RGB(0xFF, 0xFF, 0xFF)};
}

void loop()
{
    math();
    lists();
}
inline bool _isPrime(double d) {
    if (!(d == floor(d))) {
        return false;
    }
    int n = (int)d;
    if (n < 2) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }
    for (int i = 3, s = (int)(sqrt(d) + 1); i <= s; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
