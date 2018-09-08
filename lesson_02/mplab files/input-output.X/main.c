/*
 * File:   main.c
 * Author: asitha
 *
 * Created on September 8, 2018, 8:36 AM
 */


#include <xc.h>
#include "XC8.h"

void main(void) {
    
    
    TRISCbits.RC0=1;
    TRISBbits.RB1=0;
    
    OSCCON=0x76;
    
    while(1){
    
    
        if (PORTCbits.RC0==0){
        
            PORTBbits.RB1=0;
            __delay_ms(100);
        }
        else{
        
         PORTBbits.RB1=1;
            __delay_ms(100);
        
        }
    
    
    
    }
    
    
    
    return;
}
