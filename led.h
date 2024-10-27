/*
 * led.h
 *
 *  Created on: Oct 7, 2024
 *      Author: NP
 */

#ifndef LED_H_
#define LED_H_

#include "std_types.h"

/* Define the ports and pins for each LED */
#define RED_LED_PORT     PORTB_ID
#define GREEN_LED_PORT   PORTB_ID
#define BLUE_LED_PORT    PORTB_ID

#define RED_LED_PIN      PIN5_ID
#define GREEN_LED_PIN    PIN6_ID
#define BLUE_LED_PIN     PIN7_ID

#define LED_LOGIC		 POSITIVE_LOGIC
/* LED IDs for selecting which LED to control */
typedef enum {
    RED_LED,
    GREEN_LED,
    BLUE_LED
} LED_ID;

/* Logic types for LED connections */
typedef enum {
    POSITIVE_LOGIC,
    NEGATIVE_LOGIC
} LED_LogicType;


void LEDS_init(void);

void LED_on(LED_ID id);

void LED_off(LED_ID id);


#endif /* LED_H_ */
