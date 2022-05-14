
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
		  Ignition_System_Start();
	  }
	  else if(FLAG == 2)
	  {
		  WiperON_lowspeed_1Hz();
	  }

	  else if(FLAG == 3)
	  {
		  WiperON_medspeed_4Hz();
	  }

	  else if(FLAG == 4)
	  {
		  WiperON_highspeed_8Hz();
	  }
	  else if(FLAG == 5)
	  {
		  Ignition_System_Stop();
	  }

	  else if (FLAG == 6)
	  {
		  FLAG = 1;
	  }



  }

}


void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
    if(GPIO_Pin == GPIO_PIN_0)
    {
    FLAG++;
    }
}

