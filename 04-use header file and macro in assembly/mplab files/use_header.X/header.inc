count1 equ 08h
count2 equ 09h
TRISA equ 85h
TRISB equ 86h
PORTA equ 05h
PORTB equ 06h
    org 00h
    goto main
 
move macro w,f
    movlw w
    movwf f
    endm
   
delay
loop1 decfsz count1,1
    goto loop1
loop2 decfsz count2,1
    goto loop2
    return



