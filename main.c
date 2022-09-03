/*
 * File:   main.c
 * Author: bruno
 *
 * Created on 3 de Setembro de 2022, 02:58
 */


#include <xc.h>

#pragma config FOSC = INTOSCIO  // Oscillator Selection bits (INTOSC oscillator: I/O function on RA6/OSC2/CLKOUT pin, I/O function on RA7/OSC1/CLKIN)
#pragma config MCLRE = OFF      // RA5/MCLR/VPP Pin Function Select bit (RA5/MCLR/VPP pin function is digital input, MCLR internally tied to VDD)

#define _XTAL_FREQ 4000000

#define LED RB0
#define TEMPO 500

void main(void) {
    TRISB0 = 0x0; 
    while(0x1) {
        LED = !LED;
        __delay_ms(TEMPO);
    }
}
