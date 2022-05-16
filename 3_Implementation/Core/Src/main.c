/*
 * main.c
 *
 *  Created on: May 12, 2022
 *      Author: Hegde Nikhil Suresh
 */

#include "main.h"
#include "project_config.h"
#include "project_func.h"


uint32_t FLAG = 0;               

int main(void)
{


  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();


  /* Configure the system clock */
  SystemClock_Config();

  /* Initialize all configured peripherals */
  MX_GPIO_Init();

  while (1)
  {
	  if(FLAG == 1)
	  {
		  /* Start the ignition system by placing the Ignition key position at ACC. */
		  Ignition_System_Start();           
	  }
	  else if(FLAG == 2)
	  {
		  /* Wiper control system is turned on and the wiper action is started with low speed at 1Hz. */
		  WiperON_lowspeed_1Hz();
	  }

	  else if(FLAG == 3)
	  {
		  /* Wiper speed is levelled up to medium speed at 4Hz. */
		  WiperON_medspeed_4Hz();
	  }

	  else if(FLAG == 4)
	  {
		  /* Wiper speed is levelled up to high speed at 8Hz. */
		  WiperON_highspeed_8Hz();
	  }
	  else if(FLAG == 5)
	  {
          /* Stop the ignition system by placing the Ignition key position at Lock. */
		  Ignition_System_Stop();
	  }

	  else if (FLAG == 6)
	  {
		  /* Revert back to the initial state. */
		  FLAG = 1;
	  }



  }

}

/* Interrupt for checking press of button Increment the flag to indicate different stages of operation. */
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
    if(GPIO_Pin == GPIO_PIN_0)
    {
    /* Increment the flag to facilitate different stages of operation. */
    FLAG++; 

    }
}

