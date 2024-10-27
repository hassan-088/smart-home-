/*
 * dcmotor.h
 *
 *  Created on: Oct 7, 2024
 *      Author: NP
 */

#ifndef DCMOTOR_H_
#define DCMOTOR_H_

#include "std_types.h"

#define DC_MOTOR_PORT PORTB_ID /*Change to your port*/
#define IN1 PIN0_ID            /*Change to your pin*/
#define IN2 PIN1_ID            /*Change to your pin*/

typedef enum {
	Stop, /*Stop*/
	ClockWise, /*Clockwise*/
	Anti_ClockWise /*Anti-Clockwise*/
} DcMotor_State;

void  DC_Motor_Init(void);

void DcMotor_Rotate(DcMotor_State state, uint8 speed);

#endif /* DCMOTOR_H_ */
