/*
===============================================================================
 Name        : LedDisplay.c
 Author      : $(author)
 Version     :
 Copyright   : $(copyright)
 Description : main definition
===============================================================================
*/

#if defined (__USE_LPCOPEN)
#if defined(NO_BOARD_LIB)
#include "chip.h"
#else
#include "board.h"
#endif
#endif

#include <cr_section_macros.h>

void digit0()
{
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 16, true);
}

void digit1()
{
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 10, true);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 13, true);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 14, true);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 15, true);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 16, true);
}

void digit2()
{
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 12, true);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 15, true);
}

void digit3()
{
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 14, true);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 15, true);
}

void digit4()
{
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 10, true);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 13, true);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 14, true);
}

void digit5()
{
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 11, true);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 14, true);
}

void digit6()
{
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 11, true);
}

void digit7()
{
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 13, true);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 14, true);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 15, true);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 16, true);
}

void digit8()
{

}

void digit9()
{
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 14, true);
}

void err()
{
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 11, true);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 12, true);
}

int main(void) {

    Chip_GPIO_SetPinDIROutput(LPC_GPIO_PORT, 0, 5); //lcd1
    Chip_GPIO_SetPinDIROutput(LPC_GPIO_PORT, 0, 6); //lcd2
    Chip_GPIO_SetPinDIROutput(LPC_GPIO_PORT, 0, 7); //lcd3
    Chip_GPIO_SetPinDIROutput(LPC_GPIO_PORT, 0, 17); //lcd4

    Chip_GPIO_SetPinDIROutput(LPC_GPIO_PORT, 0, 10); //a
    Chip_GPIO_SetPinDIROutput(LPC_GPIO_PORT, 0, 11); //b
    Chip_GPIO_SetPinDIROutput(LPC_GPIO_PORT, 0, 12); //c
    Chip_GPIO_SetPinDIROutput(LPC_GPIO_PORT, 0, 13); //d
    Chip_GPIO_SetPinDIROutput(LPC_GPIO_PORT, 0, 14); //e
    Chip_GPIO_SetPinDIROutput(LPC_GPIO_PORT, 0, 15); //f
    Chip_GPIO_SetPinDIROutput(LPC_GPIO_PORT, 0, 16); //g


    Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 5, true);
    Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 6, true);
    Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 7, true);
    Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 17, true);

    Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 16, false);

    int digit;
    digit = 4; // select a digit


    while(1) {

    	switch(digit)
    	{
    	case 0: digit0();
    	break;
    	case 1: digit1();
    	break;
    	case 2: digit2();
    	break;
    	case 3: digit3();
    	break;
    	case 4: digit4();
    	break;
    	case 5: digit5();
    	break;
    	case 6: digit6();
    	break;
    	case 7: digit7();
    	break;
    	case 8: digit8();
    	break;
    	case 9: digit9();
    	break;
    	default: err();
    	}

    }
    return 0 ;
}
