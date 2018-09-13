/*
 * File:   main.c
 * Author: asitha
 *
 * Created on September 8, 2018, 6:40 AM
 */


#include <xc.h>
#include "XC8.h"

void main(void) {
    
    TRISBbits.RB0=0;
    OSCCON=0x76;
    
    while(1){
    
        LATBbits.LATB0=0;
        __delay_ms(500);
        LATBbits.LATB0=1;
        __delay_ms(500);
        
    
    }
    
    return;
}
