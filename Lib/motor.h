#ifndef MOTOR_H
#define MOTOR_H
#include "stm32f1xx.h"
typedef enum
{
	motor_stop_state,
	motor_cw_state,
	motor_ccw_state,
}motor_state;

typedef struct
{
	TIM_HandleTypeDef* htim;
	GPIO_TypeDef *IOport;
	uint32_t IOPin;
	uint32_t PWM_Channel;
}motor_typedef;


#endif
 