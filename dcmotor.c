/*
 * dcmotor.c
 *
 *  Created on: Oct 7, 2024
 *      Author: NP
 */

#include "dcmotor.h"
#include "common_macros.h"
#include "pwm.h"
#include "gpio.h"

void DC_Motor_Init() {
	/* Set first two pins as output */
	GPIO_setupPinDirection(DC_MOTOR_PORT, IN1, PIN_OUTPUT);
	GPIO_setupPinDirection(DC_MOTOR_PORT, IN2, PIN_OUTPUT);

	/* Set IN1,IN2 to low (motor off) at beggining */
	GPIO_writePin(DC_MOTOR_PORT, IN1, LOGIC_LOW);
	GPIO_writePin(DC_MOTOR_PORT, IN2, LOGIC_LOW);
}
void DcMotor_Rotate(DcMotor_State state, uint8 speed) {

	/** Ensure speed is between 0 and 100 */
	if (speed > 100) {
		speed = 100; /** Cap the speed to 100% */
	}

	/*Set speed for the motor*/
	PWM_Set_Duty_Cycle(speed);

	/** Set motor control pins based on the desired rotation direction */
	switch (state) {
	case ClockWise:
		GPIO_writePin(DC_MOTOR_PORT, IN1, LOGIC_HIGH); /** Set IN1 high for clockwise */
		GPIO_writePin(DC_MOTOR_PORT, IN2, LOGIC_LOW); /** Set IN2 low */
		break;

	case Anti_ClockWise:
		GPIO_writePin(DC_MOTOR_PORT, IN1, LOGIC_LOW); /** Set IN1 low for anti-clockwise */
		GPIO_writePin(DC_MOTOR_PORT, IN2, LOGIC_HIGH); /** Set IN2 high */
		break;

	case Stop:
	default:
		GPIO_writePin(DC_MOTOR_PORT, IN1, LOGIC_LOW); /** Set IN1 low to stop */
		GPIO_writePin(DC_MOTOR_PORT, IN2, LOGIC_LOW); /** Set IN2 low to stop */
		break;
	}

}

