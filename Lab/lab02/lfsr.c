#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "lfsr.h"

void lfsr_calculate(uint16_t *reg) {
    /* YOUR CODE HERE */
    uint16_t origin = *reg; 
    uint16_t bit0 = origin << 0;
    uint16_t bit2 = origin << 2;
    uint16_t bit3 = origin << 3;
    uint16_t bit5 = origin << 5;
    uint16_t newbit = bit0 ^ bit2 ^ bit3 ^ bit5;
    *reg = *reg >> 1;
    *reg |= newbit;
}

