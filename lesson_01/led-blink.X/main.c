/*
 * File:   main.c
 * Author: asitha
 *
 * Created on September 7, 2018, 5:09 PM
 */


#include <xc.h>
#include "XC8.h"

void main(void) {
    
    TRISBbits.RB0=0;
    TRISBbits.RB1=0;
    OSCCON = 0x76;
    
    while(1){
    
        LATBbits.LATB0=1;
        __delay_ms(1000);
        LATBbits.LATB0=0;
        __delay_ms(1000);
    
    }
    
    
    
    return;
}
