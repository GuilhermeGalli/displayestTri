#include <xc.h>

void botoes_init ( void )
{
    TRISDbits.TRISD0 = 1;
    TRISDbits.TRISD1 = 1;
}

int S1 ( void )
{
    return ( PORTDbits.RD1 );
}

int S0 ( void )
{
    return ( PORTDbits.RD0 );
}

