/*
 * buzzer.c
 *
 *  Created on: Oct 7, 2024
 *      Author: NP
 */
#include "gpio.h"
#include "common_macros.h"
#include "buzzer.h"

void Buzzer_init(void){
	GPIO_setupPinDirection(BUZZER_PORT,BUZZER_PIN,PIN_OUTPUT);

	GPIO_writePin(BUZZER_PORT, BUZZER_PIN, LOGIC_LOW);
}
void Buzzer_on(void){

	GPIO_writePin(BUZZER_PORT, BUZZER_PIN, LOGIC_HIGH);
}
void Buzzer_off(void){

	GPIO_writePin(BUZZER_PORT, BUZZER_PIN, LOGIC_LOW);
}
