/************************************************************/
/* form1.ino                                                */
/*                                                          */
/* Formative Assignment 1: Traffic Lights Sequencer         */
/* Anish Gautam / P2657398 / 13-10-2022                     */
/************************************************************/

#include "hal.h"

int debounceTimer = 500;


void keyPressed()
{
  int count = debounceTimer;
  pinMode(leftSwitch, INPUT_PULLUP);
  while(count > 0)
  {
    
    count --;
    if (button1Released)
    {
      
      count = debounceTimer;
      delay(500);
    }
  }
}



void setup(){ 
  HAL_setupGPIO();
  keyPressed();
  Serial.begin(9600);

  
}

void loop() {

  int charDisplayed = 0;
  
  if(button1Released)
  {
     delay(500);
     writeToShiftRegister(characterArray[3]);
     for(;;);
     delay(500);
     writeToShiftRegister(0);
     //numButtonPresses++;
  }
   delay(10);

  
  //state 1
 /* HAL_redLed1On;
  HAL_redLed2On;
  HAL_msDelay(1000);

  //state 2
  HAL_amberLed1On;
  HAL_msDelay(1000);

  //state 3
  HAL_redLed1Off;
  HAL_amberLed1Off;
  HAL_greenLed1On;
  HAL_msDelay(5000);

  //state 4
  HAL_greenLed1Off;
  HAL_amberLed1On;
  HAL_msDelay(1000);

  //state 5
  HAL_amberLed1Off;
  HAL_redLed1On;
  HAL_msDelay(1000);

  //state 6
  HAL_amberLed2On;
  HAL_msDelay(1000);

  //state 7
  HAL_redLed2Off;
  HAL_amberLed2Off;
  HAL_greenLed2On;
  HAL_msDelay(3000);

  //state 8
  HAL_greenLed2Off;
  HAL_amberLed2On;
  HAL_msDelay(1000);

  //reset
  HAL_amberLed2Off; */
}
