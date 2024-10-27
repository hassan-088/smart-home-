/*
 * flamesensor.h
 *
 *  Created on: Oct 7, 2024
 *      Author: NP
 */

#ifndef FLAMESENSOR_H_
#define FLAMESENSOR_H_

#define FLAME_SENSOR_PORT    PORTD_ID

#define FLAME_SENSOR_PIN     PIN2_ID

void FlameSensor_init(void);

uint8 FlameSensor_getValue(void);


#endif /* FLAMESENSOR_H_ */
