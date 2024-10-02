#include"main.h"
void quetLED(int x)
{
	switch(x)
	{
	case 1:
		HAL_GPIO_TogglePin(LED1_GPIO_Port, LED1_Pin);
		break;
	case 2:
		HAL_GPIO_TogglePin(LED2_GPIO_Port, LED2_Pin);
		break;
	case 3:
		HAL_GPIO_TogglePin(LED3_GPIO_Port, LED3_Pin);
	break;
	case 4:
		HAL_GPIO_TogglePin(LED4_GPIO_Port, LED4_Pin);
		break;
	case 5:
		HAL_GPIO_TogglePin(LED5_GPIO_Port, LED5_Pin);
		break;
	case 6:
		HAL_GPIO_TogglePin(LED6_GPIO_Port, LED6_Pin);
		break;
	case 7:
		HAL_GPIO_TogglePin(LED7_GPIO_Port, LED7_Pin);
		break;
	case 8:
		HAL_GPIO_TogglePin(LED8_GPIO_Port, LED8_Pin);
		break;
	case 9:
		HAL_GPIO_TogglePin(LED9_GPIO_Port, LED9_Pin);
		break;
	case 10:
		HAL_GPIO_TogglePin(LED10_GPIO_Port, LED10_Pin);
		break;
	case 11:
		HAL_GPIO_TogglePin(LED11_GPIO_Port, LED11_Pin);
		break;
	case 12:
		HAL_GPIO_TogglePin(LED12_GPIO_Port, LED12_Pin);
		break;
	}
HAL_Delay(100);

}
