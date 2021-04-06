/*
 * ADS1232.h
 *
 *  Created on: Apr 5, 2021
 *      Author: hydra
 */

#ifndef INC_ADS1232_H_
#define INC_ADS1232_H_

#include <stm32f7xx_hal.h> 		/* STM hardware library */

class Terminal{

	GPIO_Typedef * gpioPort;
	uint16_t gpioPin;
public:
	void set_terminal(GPIO_Typedef *port, uint16_t pin);
	GPIO_Typedef * get_port();
	unt16_t get_pin();
	void turn_off();
	void turn_on();

};

class ADS1232{
	Terminal sck;
	Terminal dout;
	Terminal gain0;
	Terminal gain1;
	Terminal pwdn;
	Terminal speed;
	Terminal speed;
	Terminal a0;
	Terminal temp;


public:
	void set_speed(int s);
	void set_gain(int g);


};


#endif /* INC_ADS1232_H_ */
