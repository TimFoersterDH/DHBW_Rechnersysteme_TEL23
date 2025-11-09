#include "Lab.h"
#include "Lab.h"
TaskHandle_t xHandle = NULL;

void TaskA(void)
{
}

void Lab(void)
{
	xTaskCreate(
		TaskA,       					/* Function that implements the task. */
		"TaskA",          				/* Text name for the task. */
		configMINIMAL_STACK_SIZE,      	/* Stack size in words, not bytes. */
		( void * ) 1,    				/* Parameter passed into the task. */
		osPriorityNormal,				/* Priority at which the task is created. */
		&xHandle );      				/* Used to pass out the created task's handle. */
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
}




