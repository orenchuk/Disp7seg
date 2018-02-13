/*
 * Disp7seg.cpp
 *
 *  Created on: Feb 12, 2018
 *      Author: orenchuk
 */

#include "Disp7seg.h"

void Disp7seg::set_port(int status, int element) {
	if(status)
		HAL_GPIO_WritePin(out_ports[element], out_pins[element], GPIO_PIN_SET);
	else
		HAL_GPIO_WritePin(out_ports[element], out_pins[element], GPIO_PIN_RESET);
}

void Disp7seg::clear() {
	for (int i = 0; i < amount; ++i) {
		set_port(OFF, i);
		HAL_Delay(50);
	}
}

void Disp7seg::checker() {
    for (int i = 0; i < amount; ++i) {
        set_port(ON, i);
        HAL_Delay(200);
    }
    HAL_Delay(200);
    for (int i = 9; i >= 0; --i) {
    	set_port(OFF, i);
    }
}

void Disp7seg::one() {
	clear();
    set_port(ON,b);
    set_port(ON,c);
}
void Disp7seg::two() {
	clear();
    set_port(ON,a);
    set_port(ON,b);
    set_port(ON,g);
    set_port(ON,e);
    set_port(ON,d);
}
void Disp7seg::three() {
	clear();
    set_port(ON,a);
    set_port(ON,b);
    set_port(ON,g);
    set_port(ON,c);
    set_port(ON,d);
}
void Disp7seg::four() {
	clear();
    set_port(ON,f);
    set_port(ON,b);
    set_port(ON,g);
    set_port(ON,c);
}
void Disp7seg::five() {
	clear();
    set_port(ON,a);
    set_port(ON,f);
    set_port(ON,g);
    set_port(ON,c);
    set_port(ON,d);
}
void Disp7seg::six() {
	clear();
    set_port(ON,a);
    set_port(ON,f);
    set_port(ON,g);
    set_port(ON,c);
    set_port(ON,d);
    set_port(ON,e);
}
void Disp7seg::seven() {
	clear();
    set_port(ON,a);
    set_port(ON,b);
    set_port(ON,c);
}
void Disp7seg::eight() {
	clear();
    set_port(ON,a);
    set_port(ON,b);
    set_port(ON,f);
    set_port(ON,g);
    set_port(ON,c);
    set_port(ON,d);
    set_port(ON,e);
}
void Disp7seg::nine() {
	clear();
    set_port(ON,a);
    set_port(ON,b);
    set_port(ON,f);
    set_port(ON,g);
    set_port(ON,c);
    set_port(ON,d);
}
void Disp7seg::zero() {
	clear();
    set_port(ON,a);
    set_port(ON,b);
    set_port(ON,f);
    set_port(ON,c);
    set_port(ON,d);
    set_port(ON,e);
}

void Disp7seg::show_number(int num) {
    switch(num){
        case 0: zero();
            break;
        case 1: one();
            break;
        case 2: two();
            break;
        case 3: three();
            break;
        case 4: four();
            break;
        case 5: five();
            break;
        case 6: six();
            break;
        case 7: seven();
            break;
        case 8: eight();
            break;
        case 9: nine();
            break;
    }
    HAL_Delay(200);
}
