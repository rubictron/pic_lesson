org 00h
    count equ 08h
   ;setup
   bsf 03h,5 ;use bank 1
   movlw 00h;set w = 00000000
   movwf 85h;set TRISA=w=00000000
   bcf 03h,5;return to use bank 0
   
   ;our loop start here
   start
   
   movlw 01h;set w = 00000001
   movwf 05h;set PORTA=w=00000001 RA0=1
   
   call delay
   
   movlw 02h
   movwf 05h ;set PORTA = 00000010 RA1=1
   
   call delay
   
   movlw 04h
   movwf 05h ;set RA2=1
   
   call delay
   
   goto start
   
    delay 
    loop decfsz count,1
    goto loop
    return
    
    
    
end