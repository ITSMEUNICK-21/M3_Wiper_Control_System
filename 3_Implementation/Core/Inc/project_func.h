/*
 * proj_func.h
 *
 *  Created on: May 12, 2022
 *      Author: nikhil
 */

#ifndef INC_PROJECT_FUNC_H_
#define INC_PROJECT_FUNC_H_

/* Function to start the ignition system by placing the Ignition key position at ACC. */
void Ignition_System_Start();

/* Function to stop the ignition system by placing the Ignition key position at Lock. */
void Ignition_System_Stop();

/* Function to implement the wiper action is started with low speed at 1Hz. */
void WiperON_lowspeed_1Hz();

/* Function where Wiper speed is levelled up to medium speed at 4Hz. */
void WiperON_medspeed_4Hz();

/* Wiper speed is levelled up to high speed at 8Hz. */
void WiperON_highspeed_8Hz();


#endif /* INC_PROJECT_FUNC_H_ */
