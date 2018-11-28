/*  Name     : main.c
 *  Purpose  : Main file for using LCD with PIC16F877A in 8bit mode.
 *  Author   : M.Saeed Yasin
 *  Date     : 10-08-14
 *  Website  : saeedsolutions.blogspot.com
 *  Revision : None
 */
#include "Includes.h"

// Configuration word for PIC16F877A
__CONFIG(FOSC_HS & WDTE_OFF & PWRTE_ON & CP_OFF & BOREN_ON
        & LVP_OFF & CPD_OFF & WRT_OFF & DEBUG_OFF);

// Main Function

void main(void) {
    InitLCD(); // Initialize LCD in 8bit mode

    ClearLCDScreen(); // Clear LCD screen
    WriteStringToLCD("Hello World!"); // Write Hello World on LCD

    while (1) {
    }
}

