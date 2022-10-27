/************************************************************/
/* hal.cpp                                                  */
/*                                                          */
/* Hardware Abstraction Layer (HAL) implementation          */
/* Anish Gautam / P2657398 / 13-10-2022                     */
/************************************************************/

#include "hal.h"

void HAL_setupGPIO()
{
  pinMode(red_led1, OUTPUT);
  pinMode(red_led2, OUTPUT);
  pinMode(amber_led1, OUTPUT);
  pinMode(amber_led2, OUTPUT);
  pinMode(green_led1, OUTPUT);
  pinMode(green_led2, OUTPUT);

  pinMode(leftSwitch, INPUT);
  pinMode(rightSwitch, INPUT);

  pinMode(DATA, OUTPUT);
  pinMode(CLOCK, OUTPUT);
  pinMode(LATCH, OUTPUT);

  digitalWrite(LATCH, LOW);
  digitalWrite(CLOCK, LOW);

}

void HAL_toggleLatch()
{
  digitalWrite(LATCH, HIGH);
  digitalWrite(LATCH, LOW);
}

void HAL_toggleClock()
{
  digitalWrite(CLOCK, HIGH);
  digitalWrite(CLOCK, LOW);
}

void writeToShiftRegister(byte value)
{
  byte mask = B10000000;

  for (int i = 7; i >= 0; i--)
  {
    if (value & mask)
    {
      digitalWrite(DATA, HIGH);
    }
    else
    {
      digitalWrite(DATA, LOW);
    }
    HAL_toggleClock();
    mask = mask >> 1;
  }
  HAL_toggleLatch();
}



void waitForKeypress()
{
  /*if (HAL_leftSwitchPressed(HIGH))
    {

    counter = counter + 1;

    if (counter = 16)
    {
      counter = 0;
    }
    }*/
}
