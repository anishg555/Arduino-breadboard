/************************************************************/
/* hal.h                                                    */
/*                                                          */
/* Hardware Abstraction Layer (HAL) definitions             */
/* Anish Gautam / P2657398 / 13-10-2022                     */
/************************************************************/

#ifndef _HAL_H_
#define _HAL_H_

#include <Arduino.h>

#define red_led1          2
#define amber_led1        3
#define green_led1        4
#define red_led2          5
#define amber_led2        6
#define green_led2        7

#define HAL_redLed1On     digitalWrite(red_led1, HIGH)
#define HAL_redLed1Off    digitalWrite(red_led1, LOW)

#define HAL_amberLed1On   digitalWrite(amber_led1, HIGH)
#define HAL_amberLed1Off  digitalWrite(amber_led1, LOW)

#define HAL_greenLed1On   digitalWrite(green_led1, HIGH)
#define HAL_greenLed1Off  digitalWrite(green_led1, LOW) 

#define HAL_redLed2On     digitalWrite(red_led2, HIGH)
#define HAL_redLed2Off    digitalWrite(red_led2, LOW)

#define HAL_amberLed2On   digitalWrite(amber_led2, HIGH)
#define HAL_amberLed2Off  digitalWrite(amber_led2, LOW)

#define HAL_greenLed2On   digitalWrite(green_led2, HIGH)
#define HAL_greenLed2Off  digitalWrite(green_led2, LOW) 

#define HAL_msDelay       delay

void HAL_setupGPIO();

#define leftSwitch            A0
#define rightSwitch           A1

#define button1Pressed        digitalRead(leftSwitch)
#define button1Released       !digitalRead(leftSwitch)

#define LATCH                 13
#define CLOCK                 12
#define DATA                  8

#define A                     B00000001
#define B                     B00000010
#define C                     B00000100
#define D                     B00001000
#define E                     B00010000
#define F                     B00100000
#define G                     B01000000
#define dot                   B10000000

#define char0                 (A|F|E|D|C|B)
#define char1                 (B|C)
#define char2                 (A|B|G|E|D)
#define char3                 (A|B|G|C|D)
#define char4                 (F|G|B|C)
#define char5                 (A|F|G|C|D)
#define char6                 (A|F|G|C|D|E)
#define char7                 (A|B|C)
#define char8                 (A|B|C|D|E|F|G)
#define char9                 (A|B|C|D|F|G)
#define charA                 (E|F|A|B|C|G)
#define charB                 (F|E|D|C|G)
#define charC                 (A|F|E|D)
#define charD                 (B|G|E|D|C)
#define charE                 (A|F|G|E|D)
#define charF                 (A|F|G|E)

unsigned char characterArray[16] = {char0, char1, char2, char3, char4, char5, char6, char7, char8, char9, charA, charB, charC, charD, charE, charF};

//int numButtonPresses = 0;

void HAL_toggleLatch();

void writeToShiftRegister(byte value);



void waitForKeypress();

#endif
