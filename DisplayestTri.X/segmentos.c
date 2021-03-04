#include <xc.h>
#include "config.h"


char vetor [16] = 
{
 0x3F, 0x06, 0x5B, 0x4F, 
 0x66, 0x6D, 0x7D, 0x07,
 0x79, 0x7F, 0x6F, 0x77,
 0x7C, 0x39, 0x5E, 0x71
};

void segmentos_init (void)
{
    TRISB = 0;
    PORTB = 0;
}

void segmentos (int c)
{
    PORTB = vetor [ c ];
}

void botoes_init (void)
{
    TRISDbits.TRISD0 = 1;
    TRISDbits.TRISD1 = 1;
    PORTDbits.RD0 = 0;
    PORTDbits.RD1 = 0;
}

int s1 (void)
{
   return (TRISDbits.TRISD1);
}
int s0 (void)
{
   return (TRISDbits.TRISD0);
}
