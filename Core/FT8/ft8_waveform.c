/*
 * ft8_waveform.c
 *
 *  Created on: Nov 24, 2024
 *      Author: peng
 */


#include "ft8_waveform.h"

static uint8_t itones[79] = {
	    3, 1, 4, 0, 6, 5, 2, 6, 3, 5, 0, 1, 0, 0, 2, 0, 1, 0, 0, 3, 5, 0, 4, 0, 1,
	    4, 0, 5, 0, 1, 1, 7, 7, 3, 7, 2, 3, 1, 4, 0, 6, 5, 2, 1, 5, 6, 5, 7, 2, 6,
	    1, 4, 1, 7, 0, 6, 3, 3, 6, 0, 6, 6, 7, 0, 5, 2, 4, 7, 6, 4, 7, 3, 3, 1, 4,
	    0, 6, 5, 2
	};

static float gauss_window[ 3*FT8_SYMBOL_TIME_s*FT8_FS_Hz ];

void gauss_window_init(){

}

void ft8_block_compute(symIdx,*buffer){

}
