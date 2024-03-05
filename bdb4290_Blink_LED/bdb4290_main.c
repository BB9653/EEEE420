/*
 * bdb4290_main.c
 *
 *  Created on: Jan 20, 2024
 *      Author: 15855
 */

#include <msp430g2553.h>

unsigned int i = 0;

void main(void)
{
    WDTCTL = WDTPW + WDTHOLD;

    P1DIR |= 0x01;

    for(;;)

    {
        P1OUT ^= 0x01;

        for(i=0; i< 10000; i++);

    }
}






