#include <xc.h>
#include "config.h"

void contatores_init ( void ) 
{
    TRISDbits.TRISD5 = 0;
    TRISDbits.TRISD6 = 0;
    TRISDbits.TRISD7 = 0;
    PORTDbits.RD5 = 0;
    PORTDbits.RD6 = 0;
    PORTDbits.RD7 = 0;
}

void K1 ( int estado )
{
    PORTDbits.RD7 = estado;
}

void K2 ( int estado )
{
    PORTDbits.RD6 = estado;
}

void K3 ( int estado )
{
    PORTDbits.RD5 = estado;
}

int K1status ( void )
{
    return ( PORTDbits.RD7 );
}