#include <xc.h>
#include "config.h"

char vetor[16] = { 0x3F, 0x06, 0x5B, 0x4F,
                   0x66, 0x6D, 0x7D, 0x07,
                   0x7F, 0x6F, 0x77, 0x7C,
                   0x39, 0x5E, 0x79, 0x71 };

void display7seg_init ( void )
{
    ANSELH = 0;
    TRISB = 0x00;
    PORTB = 0x00;
}

void display7seg ( int c )
{
    PORTB = vetor[c];
}

void botoes ( void )
{
    TRISDbits.TRISD3 = 1;
    TRISDbits.TRISD2 = 1;
}

int botao1 ( void )
{
    return ( PORTDbits.RD3 );
}

int botao0 ( void )
{
    return ( PORTDbits.RD2 );
}
