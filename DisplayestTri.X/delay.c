#include <xc.h>
#include "config.h"

void delay ( int t )
{
    while ( t )
    {
        --t;
        __delay_ms(1); 
    }
}
