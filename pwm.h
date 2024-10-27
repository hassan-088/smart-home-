/*
 * pwm.h
 *
 *  Created on: Oct 7, 2024
 *      Author: NP
 */

#ifndef PWM_H_
#define PWM_H_

#include "std_types.h"

#define PWM_OUTPUT_PIN PIN3

void Timer0_init_PWM();

void PWM_Set_Duty_Cycle(uint8 duty_cycle);

#endif /* PWM_H_ */
