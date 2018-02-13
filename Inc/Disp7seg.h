/*
 * Disp7seg.h
 *
 *  Created on: Feb 12, 2018
 *      Author: orenchuk
 */

#ifndef DISP7SEG_H_
#define DISP7SEG_H_

//#include "gpio.h"
#include "stm32f3xx_hal.h"
#include <stdint.h>

#define ON 1
#define OFF 0

#define a 0
#define b 1
#define c 2
#define d 3
#define e 4
#define f 5
#define g 6
#define dp 7

class Disp7seg {
private:
	static const int amount = 8;
	GPIO_TypeDef *out_ports[amount] = {a_GPIO_Port, b_GPIO_Port, c_GPIO_Port, d_GPIO_Port, e_GPIO_Port, f_GPIO_Port, g_GPIO_Port, dp_GPIO_Port};
	uint16_t out_pins[amount] = {a_Pin, b_Pin, c_Pin, d_Pin, e_Pin, f_Pin, g_Pin, dp_Pin};

public:
	void clear();
	void set_port(int, int);
	void show_number(int);
};


#endif /* DISP7SEG_H_ */
