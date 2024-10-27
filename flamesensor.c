/*
 * flamesensor.c
 *
 *  Created on: Oct 7, 2024
 *      Author: NP
 */
#include "gpio.h"
#include "common_macros.h"
#include "flamesensor.h"
#include "std_types.h"
void FlameSensor_init(void){

	GPIO_setupPinDirection(FLAME_SENSOR_PORT,FLAME_SENSOR_PIN,PIN_OUTPUT);

}

uint8 FlameSensor_getValue(void){

	return GPIO_readPin(FLAME_SENSOR_PORT, FLAME_SENSOR_PIN);


}
