/*
 * hamPhu.h
 *
 *  Created on: Sep 27, 2024
 *      Author: truon
 */

#ifndef INC_HAMPHU_H_
#define INC_HAMPHU_H_
#include "main.h"

void display7SEG(int num);
void initCol();
void updateLEDMatrix(int index);
void displayLEDMatrix(uint8_t value);
void chayChu();
#endif /* INC_HAMPHU_H_ */
