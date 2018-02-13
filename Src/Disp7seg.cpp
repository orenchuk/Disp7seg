/*
 * Disp7seg.cpp
 *
 *  Created on: Feb 12, 2018
 *      Author: orenchuk
 */

#include "Disp7seg.h"

void Disp7seg::clear() {
	for (int i = 0; i < amount; ++i) {
		Disp7seg::set_port(OFF, i);
		HAL_Delay(50);
	}
}

void Disp7seg::set_port(int status, int element)
{
	if(status)
		HAL_GPIO_WritePin(out_ports[element], out_pins[element], GPIO_PIN_SET);
	else
		HAL_GPIO_WritePin(out_ports[element], out_pins[element], GPIO_PIN_RESET);
}

void Disp7seg::show_number(int num) {
//	TODO: зроби, щоб можна було вводи цифру і її висвічувало на дисплеї

}

