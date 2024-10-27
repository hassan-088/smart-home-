/*
 * led.c
 *
 *  Created on: Oct 7, 2024
 *      Author: NP
 */

#include "gpio.h"
#include "common_macros.h"
#include "led.h"

void LEDS_init(void){

	GPIO_setupPinDirection(RED_LED_PORT,RED_LED_PIN,PIN_OUTPUT);
	GPIO_setupPinDirection(GREEN_LED_PORT,GREEN_LED_PIN,PIN_OUTPUT);
	GPIO_setupPinDirection(BLUE_LED_PORT,BLUE_LED_PIN,PIN_OUTPUT);

}

void LED_on(LED_ID id){
	if(LED_LOGIC == POSITIVE_LOGIC){
		switch(id){
		case RED_LED :
			GPIO_writePin(RED_LED_PORT,RED_LED_PIN,LOGIC_HIGH);
			break;
		case GREEN_LED :
			GPIO_writePin(GREEN_LED_PORT,GREEN_LED_PIN,LOGIC_HIGH);
			break;
		case BLUE_LED :
			GPIO_writePin(BLUE_LED_PORT,BLUE_LED_PIN,LOGIC_HIGH);
			break;

		}
	}else{
		switch(id){
		case RED_LED :
			GPIO_writePin(RED_LED_PORT,RED_LED_PIN,LOGIC_LOW);
			break;
		case GREEN_LED :
			GPIO_writePin(GREEN_LED_PORT,GREEN_LED_PIN,LOGIC_LOW);
			break;
		case BLUE_LED :
			GPIO_writePin(BLUE_LED_PORT,BLUE_LED_PIN,LOGIC_LOW);
			break;
		}
	}
}
void LED_off(LED_ID id){
	if(LED_LOGIC == POSITIVE_LOGIC){
		switch(id){
		case RED_LED :
			GPIO_writePin(RED_LED_PORT,RED_LED_PIN,LOGIC_LOW);
			break;
		case GREEN_LED :
			GPIO_writePin(GREEN_LED_PORT,GREEN_LED_PIN,LOGIC_LOW);
			break;
		case BLUE_LED :
			GPIO_writePin(BLUE_LED_PORT,BLUE_LED_PIN,LOGIC_LOW);
			break;
		}
	}else{
		switch(id){
		case RED_LED :
			GPIO_writePin(RED_LED_PORT,RED_LED_PIN,LOGIC_LOW);
			break;
		case GREEN_LED :
			GPIO_writePin(GREEN_LED_PORT,GREEN_LED_PIN,LOGIC_LOW);
			break;
		case BLUE_LED :
			GPIO_writePin(BLUE_LED_PORT,BLUE_LED_PIN,LOGIC_LOW);
			break;
		}
	}
}
