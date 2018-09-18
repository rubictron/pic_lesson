#include "header.inc"
    
main
    bsf 03h,5
    move 00h,TRISA
    bcf 03h,5

start
    
    move 01h,PORTA
    call delay
    move 02h,PORTA
    call delay
    move 04h,PORTA
    call delay

    goto start 
    end


