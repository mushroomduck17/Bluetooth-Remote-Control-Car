#ifndef CAR_H
#define CAR_H
#include "stm32f1xx.h"

typedef enum
{
	car_stop_state,
	car_forward_state,
	car_back_state,
	car_right_state,
	car_left_state,
}car_state;

void car_control ( car_state state, uint8_t speed);
void car_init( TIM_HandleTypeDef* htim, uint32_t PWM_Channel_left, uint32_t PWM_Channel_right
								,GPIO_TypeDef *IOport, uint32_t IOPin_left, uint32_t IOPin_right);

#endif
