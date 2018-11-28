
// Function Declarations for Generic Functions.c

#ifndef __LCD
#define __LCD

// Define Pins
#define LCD_E    		RD0   // Enable pin for LCD
#define LCD_RS	 		RD1   // RS pin for LCD
#define LCD_Data_Bus 	PORTB // Data bus for LCD

// Define Pins direction registrers
#define LCD_E_Dir     		TRISD0
#define LCD_RS_Dir   	 	TRISD1
#define LCD_Data_Bus_Dir 	TRISB

// Constants
#define E_Delay       500  


// Function Declarations
void WriteCommandToLCD(unsigned char);
void WriteDataToLCD(char);
void InitLCD(void);
void WriteStringToLCD(const char*);
void ClearLCDScreen(void);


#endif