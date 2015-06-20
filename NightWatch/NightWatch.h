#pragma once

extern "C" {

#include "cc430x613x.h"
#include "RF1A.h"
#include "hal_pmm.h"
}

/*******************
 * Function Definition
 */
void Transmit( unsigned char *buffer, unsigned char length );
void ReceiveOn( void );
void ReceiveOff( void );

void InitButtonLeds( void );
void InitRadio( void );

