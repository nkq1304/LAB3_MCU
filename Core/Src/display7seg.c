/*
 * display7seg.c
 *
 *      Author: Administrator
 */


#include "main.h"
void display7SEG_1(int counter)
{
	switch(counter)
	{
	case 0:
		HAL_GPIO_WritePin(INPUTSEG0_1_GPIO_Port, INPUTSEG0_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG0_2_GPIO_Port, INPUTSEG0_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG0_3_GPIO_Port, INPUTSEG0_3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG0_4_GPIO_Port, INPUTSEG0_4_Pin, GPIO_PIN_RESET);
		break;
	case 1:
		HAL_GPIO_WritePin(INPUTSEG0_1_GPIO_Port, INPUTSEG0_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG0_2_GPIO_Port, INPUTSEG0_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG0_3_GPIO_Port, INPUTSEG0_3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG0_4_GPIO_Port, INPUTSEG0_4_Pin, GPIO_PIN_RESET);
		break;
	case 2:
		HAL_GPIO_WritePin(INPUTSEG0_1_GPIO_Port, INPUTSEG0_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG0_2_GPIO_Port, INPUTSEG0_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG0_3_GPIO_Port, INPUTSEG0_3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG0_4_GPIO_Port, INPUTSEG0_4_Pin, GPIO_PIN_RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(INPUTSEG0_1_GPIO_Port, INPUTSEG0_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG0_2_GPIO_Port, INPUTSEG0_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG0_3_GPIO_Port, INPUTSEG0_3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG0_4_GPIO_Port, INPUTSEG0_4_Pin, GPIO_PIN_RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(INPUTSEG0_1_GPIO_Port, INPUTSEG0_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG0_2_GPIO_Port, INPUTSEG0_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG0_3_GPIO_Port, INPUTSEG0_3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG0_4_GPIO_Port, INPUTSEG0_4_Pin, GPIO_PIN_RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(INPUTSEG0_1_GPIO_Port, INPUTSEG0_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG0_2_GPIO_Port, INPUTSEG0_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG0_3_GPIO_Port, INPUTSEG0_3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG0_4_GPIO_Port, INPUTSEG0_4_Pin, GPIO_PIN_RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(INPUTSEG0_1_GPIO_Port, INPUTSEG0_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG0_2_GPIO_Port, INPUTSEG0_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG0_3_GPIO_Port, INPUTSEG0_3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG0_4_GPIO_Port, INPUTSEG0_4_Pin, GPIO_PIN_RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(INPUTSEG0_1_GPIO_Port, INPUTSEG0_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG0_2_GPIO_Port, INPUTSEG0_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG0_3_GPIO_Port, INPUTSEG0_3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG0_4_GPIO_Port, INPUTSEG0_4_Pin, GPIO_PIN_RESET);
		break;
	case 8:
		HAL_GPIO_WritePin(INPUTSEG0_1_GPIO_Port, INPUTSEG0_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG0_2_GPIO_Port, INPUTSEG0_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG0_3_GPIO_Port, INPUTSEG0_3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG0_4_GPIO_Port, INPUTSEG0_4_Pin, GPIO_PIN_SET);
		break;
	case 9:
		HAL_GPIO_WritePin(INPUTSEG0_1_GPIO_Port, INPUTSEG0_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG0_2_GPIO_Port, INPUTSEG0_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG0_3_GPIO_Port, INPUTSEG0_3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG0_4_GPIO_Port, INPUTSEG0_4_Pin, GPIO_PIN_SET);
		break;
	default:
		break;
	}
}
void display7SEG_2(int counter)
{
	switch(counter)
	{
	case 0:
		HAL_GPIO_WritePin(INPUTSEG1_1_GPIO_Port, INPUTSEG1_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG1_2_GPIO_Port, INPUTSEG1_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG1_3_GPIO_Port, INPUTSEG1_3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG1_4_GPIO_Port, INPUTSEG1_4_Pin, GPIO_PIN_RESET);
		break;
	case 1:
		HAL_GPIO_WritePin(INPUTSEG1_1_GPIO_Port, INPUTSEG1_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG1_2_GPIO_Port, INPUTSEG1_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG1_3_GPIO_Port, INPUTSEG1_3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG1_4_GPIO_Port, INPUTSEG1_4_Pin, GPIO_PIN_RESET);
		break;
	case 2:
		HAL_GPIO_WritePin(INPUTSEG1_1_GPIO_Port, INPUTSEG1_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG1_2_GPIO_Port, INPUTSEG1_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG1_3_GPIO_Port, INPUTSEG1_3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG1_4_GPIO_Port, INPUTSEG1_4_Pin, GPIO_PIN_RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(INPUTSEG1_1_GPIO_Port, INPUTSEG1_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG1_2_GPIO_Port, INPUTSEG1_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG1_3_GPIO_Port, INPUTSEG1_3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG1_4_GPIO_Port, INPUTSEG1_4_Pin, GPIO_PIN_RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(INPUTSEG1_1_GPIO_Port, INPUTSEG1_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG1_2_GPIO_Port, INPUTSEG1_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG1_3_GPIO_Port, INPUTSEG1_3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG1_4_GPIO_Port, INPUTSEG1_4_Pin, GPIO_PIN_RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(INPUTSEG1_1_GPIO_Port, INPUTSEG1_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG1_2_GPIO_Port, INPUTSEG1_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG1_3_GPIO_Port, INPUTSEG1_3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG1_4_GPIO_Port, INPUTSEG1_4_Pin, GPIO_PIN_RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(INPUTSEG1_1_GPIO_Port, INPUTSEG1_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG1_2_GPIO_Port, INPUTSEG1_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG1_3_GPIO_Port, INPUTSEG1_3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG1_4_GPIO_Port, INPUTSEG1_4_Pin, GPIO_PIN_RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(INPUTSEG1_1_GPIO_Port, INPUTSEG1_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG1_2_GPIO_Port, INPUTSEG1_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG1_3_GPIO_Port, INPUTSEG1_3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG1_4_GPIO_Port, INPUTSEG1_4_Pin, GPIO_PIN_RESET);
		break;
	case 8:
		HAL_GPIO_WritePin(INPUTSEG1_1_GPIO_Port, INPUTSEG1_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG1_2_GPIO_Port, INPUTSEG1_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG1_3_GPIO_Port, INPUTSEG1_3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG1_4_GPIO_Port, INPUTSEG1_4_Pin, GPIO_PIN_SET);
		break;
	case 9:
		HAL_GPIO_WritePin(INPUTSEG1_1_GPIO_Port, INPUTSEG1_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG1_2_GPIO_Port, INPUTSEG1_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG1_3_GPIO_Port, INPUTSEG1_3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG1_4_GPIO_Port, INPUTSEG1_4_Pin, GPIO_PIN_SET);
		break;
	default:
		break;
	}
}
void display7SEG_3(int counter)
{
	switch(counter)
	{
	case 0:
		HAL_GPIO_WritePin(INPUTSEG2_1_GPIO_Port, INPUTSEG2_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG2_2_GPIO_Port, INPUTSEG2_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG2_3_GPIO_Port, INPUTSEG2_3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG2_4_GPIO_Port, INPUTSEG2_4_Pin, GPIO_PIN_RESET);
		break;
	case 1:
		HAL_GPIO_WritePin(INPUTSEG2_1_GPIO_Port, INPUTSEG2_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG2_2_GPIO_Port, INPUTSEG2_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG2_3_GPIO_Port, INPUTSEG2_3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG2_4_GPIO_Port, INPUTSEG2_4_Pin, GPIO_PIN_RESET);
		break;
	case 2:
		HAL_GPIO_WritePin(INPUTSEG2_1_GPIO_Port, INPUTSEG2_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG2_2_GPIO_Port, INPUTSEG2_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG2_3_GPIO_Port, INPUTSEG2_3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG2_4_GPIO_Port, INPUTSEG2_4_Pin, GPIO_PIN_RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(INPUTSEG2_1_GPIO_Port, INPUTSEG2_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG2_2_GPIO_Port, INPUTSEG2_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG2_3_GPIO_Port, INPUTSEG2_3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG2_4_GPIO_Port, INPUTSEG2_4_Pin, GPIO_PIN_RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(INPUTSEG2_1_GPIO_Port, INPUTSEG2_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG2_2_GPIO_Port, INPUTSEG2_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG2_3_GPIO_Port, INPUTSEG2_3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG2_4_GPIO_Port, INPUTSEG2_4_Pin, GPIO_PIN_RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(INPUTSEG2_1_GPIO_Port, INPUTSEG2_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG2_2_GPIO_Port, INPUTSEG2_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG2_3_GPIO_Port, INPUTSEG2_3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG2_4_GPIO_Port, INPUTSEG2_4_Pin, GPIO_PIN_RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(INPUTSEG2_1_GPIO_Port, INPUTSEG2_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG2_2_GPIO_Port, INPUTSEG2_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG2_3_GPIO_Port, INPUTSEG2_3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG2_4_GPIO_Port, INPUTSEG2_4_Pin, GPIO_PIN_RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(INPUTSEG2_1_GPIO_Port, INPUTSEG2_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG2_2_GPIO_Port, INPUTSEG2_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG2_3_GPIO_Port, INPUTSEG2_3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG2_4_GPIO_Port, INPUTSEG2_4_Pin, GPIO_PIN_RESET);
		break;
	case 8:
		HAL_GPIO_WritePin(INPUTSEG2_1_GPIO_Port, INPUTSEG2_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG2_2_GPIO_Port, INPUTSEG2_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG2_3_GPIO_Port, INPUTSEG2_3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG2_4_GPIO_Port, INPUTSEG2_4_Pin, GPIO_PIN_SET);
		break;
	case 9:
		HAL_GPIO_WritePin(INPUTSEG2_1_GPIO_Port, INPUTSEG2_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG2_2_GPIO_Port, INPUTSEG2_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG2_3_GPIO_Port, INPUTSEG2_3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG2_4_GPIO_Port, INPUTSEG2_4_Pin, GPIO_PIN_SET);
		break;
	default:
		break;
	}
}
void display7SEG_4(int counter)
{
	switch(counter)
	{
	case 0:
		HAL_GPIO_WritePin(INPUTSEG3_1_GPIO_Port, INPUTSEG3_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG3_2_GPIO_Port, INPUTSEG3_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG3_3_GPIO_Port, INPUTSEG3_3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG3_4_GPIO_Port, INPUTSEG3_4_Pin, GPIO_PIN_RESET);
		break;
	case 1:
		HAL_GPIO_WritePin(INPUTSEG3_1_GPIO_Port, INPUTSEG3_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG3_2_GPIO_Port, INPUTSEG3_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG3_3_GPIO_Port, INPUTSEG3_3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG3_4_GPIO_Port, INPUTSEG3_4_Pin, GPIO_PIN_RESET);
		break;
	case 2:
		HAL_GPIO_WritePin(INPUTSEG3_1_GPIO_Port, INPUTSEG3_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG3_2_GPIO_Port, INPUTSEG3_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG3_3_GPIO_Port, INPUTSEG3_3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG3_4_GPIO_Port, INPUTSEG3_4_Pin, GPIO_PIN_RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(INPUTSEG3_1_GPIO_Port, INPUTSEG3_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG3_2_GPIO_Port, INPUTSEG3_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG3_3_GPIO_Port, INPUTSEG3_3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG3_4_GPIO_Port, INPUTSEG3_4_Pin, GPIO_PIN_RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(INPUTSEG3_1_GPIO_Port, INPUTSEG3_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG3_2_GPIO_Port, INPUTSEG3_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG3_3_GPIO_Port, INPUTSEG3_3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG3_4_GPIO_Port, INPUTSEG3_4_Pin, GPIO_PIN_RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(INPUTSEG3_1_GPIO_Port, INPUTSEG3_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG3_2_GPIO_Port, INPUTSEG3_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG3_3_GPIO_Port, INPUTSEG3_3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG3_4_GPIO_Port, INPUTSEG3_4_Pin, GPIO_PIN_RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(INPUTSEG3_1_GPIO_Port, INPUTSEG3_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG3_2_GPIO_Port, INPUTSEG3_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG3_3_GPIO_Port, INPUTSEG3_3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG3_4_GPIO_Port, INPUTSEG3_4_Pin, GPIO_PIN_RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(INPUTSEG3_1_GPIO_Port, INPUTSEG3_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG3_2_GPIO_Port, INPUTSEG3_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG3_3_GPIO_Port, INPUTSEG3_3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG3_4_GPIO_Port, INPUTSEG3_4_Pin, GPIO_PIN_RESET);
		break;
	case 8:
		HAL_GPIO_WritePin(INPUTSEG3_1_GPIO_Port, INPUTSEG3_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG3_2_GPIO_Port, INPUTSEG3_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG3_3_GPIO_Port, INPUTSEG3_3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG3_4_GPIO_Port, INPUTSEG3_4_Pin, GPIO_PIN_SET);
		break;
	case 9:
		HAL_GPIO_WritePin(INPUTSEG3_1_GPIO_Port, INPUTSEG3_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(INPUTSEG3_2_GPIO_Port, INPUTSEG3_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG3_3_GPIO_Port, INPUTSEG3_3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(INPUTSEG3_4_GPIO_Port, INPUTSEG3_4_Pin, GPIO_PIN_SET);
		break;
	default:
		break;
	}
}

void display7SEG_mode(int counter)
{
	switch(counter)
	{
	case 1:
		HAL_GPIO_WritePin(MODE_1_GPIO_Port, MODE_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(MODE_2_GPIO_Port, MODE_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(MODE_3_GPIO_Port, MODE_3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(MODE_4_GPIO_Port, MODE_4_Pin, GPIO_PIN_RESET);
		break;
	case 2:
		HAL_GPIO_WritePin(MODE_1_GPIO_Port, MODE_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(MODE_2_GPIO_Port, MODE_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(MODE_3_GPIO_Port, MODE_3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(MODE_4_GPIO_Port, MODE_4_Pin, GPIO_PIN_RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(MODE_1_GPIO_Port, MODE_1_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(MODE_2_GPIO_Port, MODE_2_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(MODE_3_GPIO_Port, MODE_3_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(MODE_4_GPIO_Port, MODE_4_Pin, GPIO_PIN_RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(MODE_1_GPIO_Port, MODE_1_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(MODE_2_GPIO_Port, MODE_2_Pin, GPIO_PIN_RESET);
		HAL_GPIO_WritePin(MODE_3_GPIO_Port, MODE_3_Pin, GPIO_PIN_SET);
		HAL_GPIO_WritePin(MODE_4_GPIO_Port, MODE_4_Pin, GPIO_PIN_RESET);
		break;
	default:
		break;
	}
}
