#include <xc.h>
#include "config.h"
#include "delay.h"
#include "dispLCD4vias.h"
#include "teclado.h"

void main(void)
{
    char str[] = "Tecla   ";
    
    dispLCD_init();
    teclado_init();
    
    dispLCD(0,0,"SENAI");
    while( 1 )
    {
        str[7] = teclado_scan();
        if(str[7]==0)
            str[7] = ' ';
        dispLCD(1,0, str );
    }
}