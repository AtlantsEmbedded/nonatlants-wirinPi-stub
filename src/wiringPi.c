#ifndef WIRING_PI_H
#define WIRING_PI_H


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "wiringPi.h"

#define HIGH 1
#define LOW 0

#define INPUT 0
#define OUTPUT 0
#define PWM_OUTPUT 0

int wiringPiSetup(void){
	return 0;
}

void pwmWrite(int pin, int value){
	pin = value;
	pin += 10;
}

void digitalWrite(int pin, int value){
	pin = value;
	pin += 10;
}


void pinMode(int pin, int mode){
	pin = mode;
	pin += 10;
}


int digitalRead(int pin){
	
	char resp;
	printf("Is the pin on (y/n)");
	resp = getchar();
	
	// do this to generate both time of states
	if(resp=='y')
		pin = 1;
	else
		pin = 0;
	
	return pin;
}


int delay(int time_delay){
	//printf("delay:%i\n",time_delay);
	usleep(time_delay*1000);
	return 0;
}


int softToneCreate(int pin){
	pin = 0;
	return pin;	
}

int softToneWrite(int pin, int freq){
	printf("freq:%i\n",freq);
	pin = freq;
	return pin;	
}

int piHiPri(int priority){
	priority = 0;
	return priority;
}


#endif
