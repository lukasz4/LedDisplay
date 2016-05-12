/*
===============================================================================
 Name        : LedDisplay3.c
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
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 10, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 11, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 12, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 13, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 14, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 15, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 16, true);
}

void digit1()
{
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 10, true);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 11, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 12, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 13, true);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 14, true);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 15, true);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 16, true);
}

void digit2()
{
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 10, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 11, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 12, true);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 13, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 14, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 15, true);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 16, false);
}

void digit3()
{
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 10, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 11, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 12, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 13, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 14, true);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 15, true);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 16, false);
}

void digit4()
{
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 10, true);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 11, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 12, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 13, true);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 14, true);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 15, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 16, false);
}

void digit5()
{	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 10, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 11, true);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 12, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 13, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 14, true);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 15, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 16, false);
}

void digit6()
{
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 10, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 11, true);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 12, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 13, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 14, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 15, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 16, false);
}

void digit7()
{
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 10, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 11, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 12, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 13, true);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 14, true);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 15, true);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 16, true);
}

void digit8()
{
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 10, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 11, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 12, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 13, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 14, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 15, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 16, false);

}

void digit9()
{
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 10, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 11, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 12, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 13, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 14, true);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 15, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 16, false);
}

void e_rr()
{
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 10, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 11, true);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 12, true);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 13, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 14, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 15, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 16, false);
}

void err_()
{
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 10, true);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 11, true);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 12, true);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 13, true);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 14, false);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 15, true);
	Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 16, false);
}

void _delay_ms (uint16_t ms)
{
 uint16_t delay;
 volatile uint32_t i;
 for (delay = ms; delay >0 ; delay--)
  {
  for (i=2350; i >0;i--){}; //2187,5
  }
}


int main(void) {

  //  Chip_GPIO_SetPinDIROutput(LPC_GPIO_PORT, 0, 5); //lcd1
    Chip_GPIO_SetPinDIROutput(LPC_GPIO_PORT, 0, 6); //lcd2 //second from left
    Chip_GPIO_SetPinDIROutput(LPC_GPIO_PORT, 0, 7); //lcd3
    Chip_GPIO_SetPinDIROutput(LPC_GPIO_PORT, 0, 17); //lcd4 last from left

    Chip_GPIO_SetPinDIROutput(LPC_GPIO_PORT, 0, 10); //a
    Chip_GPIO_SetPinDIROutput(LPC_GPIO_PORT, 0, 11); //b
    Chip_GPIO_SetPinDIROutput(LPC_GPIO_PORT, 0, 12); //c
    Chip_GPIO_SetPinDIROutput(LPC_GPIO_PORT, 0, 13); //d
    Chip_GPIO_SetPinDIROutput(LPC_GPIO_PORT, 0, 14); //e
    Chip_GPIO_SetPinDIROutput(LPC_GPIO_PORT, 0, 15); //f
    Chip_GPIO_SetPinDIROutput(LPC_GPIO_PORT, 0, 16); //g


  //  Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 5, true);
    Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 6, false);
    Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 7, false);
    Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 17, false);





    char tab[3] = {'7','2','4'};   //////// write a digit





    while(1) {

//first digit //second lcd from left
	switch(tab[0]-48)
    	{
    	case 0:
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 6, true);
    		digit0();
    		_delay_ms(1);
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 6, false);
    	break;
    	case 1:
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 6, true);
    		digit1();
    		_delay_ms(1);
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 6, false);
    	break;
    	case 2:
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 6, true);
    		digit2();
    		_delay_ms(1);
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 6, false);
    	break;
    	case 3:
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 6, true);
    		digit3();
    		_delay_ms(1);
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 6, false);
    	break;
    	case 4:
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 6, true);
    		digit4();
    		_delay_ms(1);
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 6, false);
    	break;
    	case 5:
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 6, true);
    		digit5();
    		_delay_ms(1);
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 6, false);
    	break;
    	case 6:
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 6, true);
    		digit6();
    		_delay_ms(1);
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 6, false);
    	break;
    	case 7:
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 6, true);
    		digit7();
    		_delay_ms(1);
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 6, false);
    	break;
    	case 8:
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 6, true);
    		digit8();
    		_delay_ms(1);
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 6, false);
    	break;
    	case 9:
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 6, true);
    		digit9();
    		_delay_ms(1);
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 6, false);
    	break;
    	default: //error
		while(1)
		{
	    Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 6, true);
	    e_rr();
	    _delay_ms(1);
	    Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 6, false);

	    Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 7, true);
   	    err_();
	    _delay_ms(1);
	    Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 7, false);

	    Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 17, true);
   	    err_();
	    _delay_ms(1);
	    Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 17, false);
		}

    	}

//second digit //third lcd from left
	switch(tab[1]-48)
    	{
    	case 0:
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 7, true);
    		digit0();
    		_delay_ms(1);
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 7, false);
    	break;
    	case 1:
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 7, true);
    		digit1();
    		_delay_ms(1);
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 7, false);
    	break;
    	case 2:
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 7, true);
    		digit2();
    		_delay_ms(1);
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 7, false);
    	break;
    	case 3:
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 7, true);
    		digit3();
    		_delay_ms(1);
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 7, false);
    	break;
    	case 4:
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 7, true);
    		digit4();
    		_delay_ms(1);
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 7, false);
    	break;
    	case 5:
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 7, true);
    		digit5();
    		_delay_ms(1);
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 7, false);
    	break;
    	case 6:
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 7, true);
    		digit6();
    		_delay_ms(1);
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 7, false);
    	break;
    	case 7:
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 7, true);
    		digit7();
    		_delay_ms(1);
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 7, false);
    	break;
    	case 8:
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 7, true);
    		digit8();
    		_delay_ms(1);
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 7, false);
    	break;
    	case 9:
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 7, true);
    		digit9();
    		_delay_ms(1);
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 7, false);
    	break;
    	default:
		while(1)
		{
	    Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 6, true);
	    e_rr();
	    _delay_ms(1);
	    Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 6, false);

	    Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 7, true);
   	    err_();
	    _delay_ms(1);
	    Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 7, false);

	    Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 17, true);
   	    err_();
	    _delay_ms(1);
	    Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 17, false);
		}

    	}

	//third digit // fourth lcd from left
	switch(tab[2]-48)
    	{
    	case 0:
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 17, true);
    		digit0();
    		_delay_ms(1);
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 17, false);
    	break;
    	case 1:
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 17, true);
    		digit1();
    		_delay_ms(1);
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 17, false);
    	break;
    	case 2:
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 17, true);
    		digit2();
    		_delay_ms(1);
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 17, false);
    	break;
    	case 3:
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 17, true);
    		digit3();
    		_delay_ms(1);
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 17, false);
    	break;
    	case 4:
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 17, true);
    		digit4();
    		_delay_ms(1);
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 17, false);
    	break;
    	case 5:
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 17, true);
    		digit5();
    		_delay_ms(1);
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 17, false);
    	break;
    	case 6:
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 17, true);
    		digit6();
    		_delay_ms(1);
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 17, false);
    	break;
    	case 7:
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 17, true);
    		digit7();
    		_delay_ms(1);
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 17, false);
    	break;
    	case 8:
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 17, true);
    		digit8();
    		_delay_ms(1);
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 17, false);
    	break;
    	case 9:
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 17, true);
    		digit9();
    		_delay_ms(1);
    		Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 17, false);
    	break;
    	default:
		while(1)
		{
	    Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 6, true);
	    e_rr();
	    _delay_ms(1);
	    Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 6, false);

	    Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 7, true);
   	    err_();
	    _delay_ms(1);
	    Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 7, false);

	    Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 17, true);
   	    err_();
	    _delay_ms(1);
	    Chip_GPIO_SetPinState(LPC_GPIO_PORT, 0, 17, false);
		}

    	}

    }

    return 0 ;
}
