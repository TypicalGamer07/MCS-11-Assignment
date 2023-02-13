(a) To calculate the power without using the pow(x,y) function of <;math.h>

#include <stdio.h>
// Function to calculate x raised to the power of y
int power(int x, int y) {
    int result = 1;
    int i;
    for (i = 0; i < y; i++) {
        result *= x;
    }
    return result;
}
