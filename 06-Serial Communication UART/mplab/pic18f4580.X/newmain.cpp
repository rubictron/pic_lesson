/* 
 * File:   newmain.cpp
 * Author: asitha
 *
 * Created on September 23, 2018, 7:21 AM
 */

#include <cstdlib>
#include <xc.h>
#include "xc8.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
       
    TRISBbits.RB0=0;
    
    
    
    while(1){
    PORTBbits.RB0=0;
    __delay_ms(200);
    PORTBbits.RB0=1;
    __delay_ms(200);
    
    }
    
    return;
    return 0;
}



