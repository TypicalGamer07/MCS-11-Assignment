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

int main() {
    int x, y;
    printf("Enter the base number: ");
    scanf("%d", &x);
    printf("Enter the exponent: ");
    scanf("%d", &y);
    printf("%d raised to the power of %d is: %d\n", x, y, power(x, y));
    return 0;
}
