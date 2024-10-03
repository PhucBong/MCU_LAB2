/*
 * hamPhu.c
 *
 *  Created on: Sep 27, 2024
 *      Author: truon
 */

#include "hamPhu.h"

void display7SEG(int num){
	switch (num) {
		case 0:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
			break;
		case 1:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
			break;
		case 2:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, SET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
			break;
		case 8:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
			break;
		default:
			break;
	}
}
uint16_t ROW_Pin[8] = {ROW0_Pin, ROW1_Pin, ROW2_Pin, ROW3_Pin, ROW4_Pin, ROW5_Pin, ROW6_Pin, ROW7_Pin};
void initCol(){ // tat het tat ca cac cot
	HAL_GPIO_WritePin(GPIOA, ENM0_Pin | ENM1_Pin | ENM2_Pin | ENM3_Pin | ENM4_Pin | ENM5_Pin | ENM6_Pin | ENM7_Pin, SET);
}
void displayLEDMatrix(uint8_t value){
	for(int row = 0; row < 8; row++){
		int flag;
		if(value & (1 << (7-row))) flag = 1;
		if(!(value & (1 << (7-row)))) flag = 0;
		switch (flag) {
			case 0:
				HAL_GPIO_WritePin(GPIOB, ROW_Pin[row], RESET); // cho hang len 0 de den sang
				break;
			case 1:
				HAL_GPIO_WritePin(GPIOB, ROW_Pin[row], SET); // cho hang len 1 de den tat
				break;
			default:
				break;
		}
	}
}
uint8_t matrix_buffer[8] = {0xff, 0xc0, 0x80, 0x37, 0x37, 0x80, 0xc0, 0xff};
uint8_t led_animation[8] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff};
void updateLEDMatrix(int index){
	initCol(); // tat het tat cac cot
	switch (index) {
		case 0:
			HAL_GPIO_WritePin(GPIOA, ENM0_Pin, RESET); // mo cot dau tien
			displayLEDMatrix(led_animation[index]);
			break;
		case 1:
			HAL_GPIO_WritePin(GPIOA, ENM1_Pin, RESET);
			displayLEDMatrix(led_animation[index]);
			break;
		case 2:
			HAL_GPIO_WritePin(GPIOA, ENM2_Pin, RESET);
			displayLEDMatrix(led_animation[index]);
			break;
		case 3:
			HAL_GPIO_WritePin(GPIOA, ENM3_Pin, RESET);
			displayLEDMatrix(led_animation[index]);
			break;
		case 4:
			HAL_GPIO_WritePin(GPIOA, ENM4_Pin, RESET);
			displayLEDMatrix(led_animation[index]);
			break;
		case 5:
			HAL_GPIO_WritePin(GPIOA, ENM5_Pin, RESET);
			displayLEDMatrix(led_animation[index]);
			break;
		case 6:
			HAL_GPIO_WritePin(GPIOA, ENM6_Pin, RESET);
			displayLEDMatrix(led_animation[index]);
			break;
		case 7:
			HAL_GPIO_WritePin(GPIOA, ENM7_Pin, RESET);
			displayLEDMatrix(led_animation[index]);
			break;
		default:
			break;
	}
}
void chayChu(){
	for(int u = 0; u < 8; u++){
		for (int i = 0; i < 7; i++){
			led_animation[i] = led_animation[i+1];
		}
		led_animation[7] = matrix_buffer[u];
		for (int i = 7 ; i >= 0; i--){
			updateLEDMatrix(i);
			HAL_Delay(10);
		}
	}

}
