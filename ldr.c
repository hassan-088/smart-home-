/*
 * ldr.c
 *
 *  Created on: Oct 7, 2024
 *      Author: NP
 */
#include "LDR.h"
#include "ADC.h"
#include "std_types.h"

uint16 LDR_getLightIntensity(void){

	uint8 Light_value = 0;

	uint16 adc_value = 0;

	adc_value = ADC_readChannel(LDR_SENSOR_CHANNEL_ID);

	/* Calculate the temperature from the ADC value*/
	Light_value = (uint8)(((uint32)adc_value*LDR_SENSOR_MAX_LIGHT_INTENSITY*ADC_REF_VOLT_VALUE)/(ADC_MAXIMUM_VALUE*LDR_SENSOR_MAX_VOLT_VALUE));

	return Light_value;

}
