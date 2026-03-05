#include <stdio.h>
#include "bit_ops.h"

// Return the nth bit of x.
// Assume 0 <= n <= 31
unsigned get_bit(unsigned x,
                 unsigned n) {
    unsigned mask = 1;
    mask << n;
    unsigned ans =  mask & x;
    // YOUR CODE HERE
    
    // Returning -1 is a placeholder (it makes
    // no sense, because get_bit only returns 
    // 0 or 1)
    return -1;            
}
// Set the nth bit of the value of x to v.
// Assume 0 <= n <= 31, and v is 0 or 1
void set_bit(unsigned * x,
             unsigned n,
             unsigned v) {
    unsigned mask = ~(1 << n);
    *x = *x & mask;
    v = v << n;
    *x = *x & v;
    // YOUR CODE HERE
}
// Flip the nth bit of the value of x.
// Assume 0 <= n <= 31
void flip_bit(unsigned * x,
              unsigned n) {
    unsigned mask = 1;
    mask = mask << n;
    *x = *x ^ mask;
    
    // YOUR CODE HERE
}

