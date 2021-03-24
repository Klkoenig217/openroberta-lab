import microbit
import random
import math

class BreakOutOfALoop(Exception): pass
class ContinueLoop(Exception): pass

timer1 = microbit.running_time()

___numberVar = 0
___booleanVar = True
___stringVar = ""
___imageVar = microbit.Image.HEART
___numberList = [0, 0]
___booleanList = [True, True]
___stringList = ["", ""]
___imageList = [microbit.Image.HEART, microbit.Image.HEART]
def sensors():
    global timer1, ___numberVar, ___booleanVar, ___stringVar, ___imageVar, ___numberList, ___booleanList, ___stringList, ___imageList
    microbit.display.scroll(str(microbit.button_a.is_pressed()))
    microbit.display.scroll(str(microbit.button_b.is_pressed()))
    microbit.display.scroll(str("up" == microbit.accelerometer.current_gesture()))
    microbit.display.scroll(str("down" == microbit.accelerometer.current_gesture()))
    microbit.display.scroll(str("face down" == microbit.accelerometer.current_gesture()))
    microbit.display.scroll(str("face up" == microbit.accelerometer.current_gesture()))
    microbit.display.scroll(str("shake" == microbit.accelerometer.current_gesture()))
    microbit.display.scroll(str("freefall" == microbit.accelerometer.current_gesture()))
    microbit.display.scroll(str(microbit.compass.heading()))
    microbit.display.scroll(str(( microbit.running_time() - timer1 )))
    timer1 = microbit.running_time()
    microbit.display.scroll(str(microbit.temperature()))
    microbit.display.scroll(str(microbit.pin0.is_touched()))
    microbit.display.scroll(str(microbit.pin1.is_touched()))
    microbit.display.scroll(str(microbit.pin2.is_touched()))
    microbit.display.scroll(str(microbit.pin0.read_analog()))
    microbit.display.scroll(str(microbit.pin1.read_analog()))
    microbit.display.scroll(str(microbit.pin2.read_analog()))
    microbit.display.scroll(str(microbit.pin3.read_analog()))
    microbit.display.scroll(str(microbit.pin4.read_analog()))
    microbit.display.scroll(str(microbit.pin10.read_analog()))
    microbit.display.scroll(str(microbit.pin0.read_digital()))
    microbit.display.scroll(str(microbit.pin1.read_digital()))
    microbit.display.scroll(str(microbit.pin2.read_digital()))
    microbit.display.scroll(str(microbit.pin3.read_digital()))
    microbit.display.scroll(str(microbit.pin4.read_digital()))
    microbit.display.scroll(str(microbit.pin5.read_digital()))
    microbit.display.scroll(str(microbit.pin6.read_digital()))
    microbit.display.scroll(str(microbit.pin7.read_digital()))
    microbit.display.scroll(str(microbit.pin8.read_digital()))
    microbit.display.scroll(str(microbit.pin9.read_digital()))
    microbit.display.scroll(str(microbit.pin10.read_digital()))
    microbit.display.scroll(str(microbit.pin11.read_digital()))
    microbit.display.scroll(str(microbit.pin12.read_digital()))
    microbit.display.scroll(str(microbit.pin13.read_digital()))
    microbit.display.scroll(str(microbit.pin14.read_digital()))
    microbit.display.scroll(str(microbit.pin15.read_digital()))
    microbit.display.scroll(str(microbit.pin16.read_digital()))
    microbit.display.scroll(str(microbit.pin19.read_digital()))
    microbit.display.scroll(str(microbit.pin20.read_digital()))
    microbit.display.scroll(str(microbit.accelerometer.get_x()))
    microbit.display.scroll(str(round(microbit.display.read_light_level() / 2.55)))

def run():
    global timer1, ___numberVar, ___booleanVar, ___stringVar, ___imageVar, ___numberList, ___booleanList, ___stringList, ___imageList
    sensors()

def main():
    try:
        run()
    except Exception as e:
        raise

if __name__ == "__main__":
    main()