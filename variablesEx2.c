#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 7;
    float y = 6.2;
    float sum = x + y;
    float mult = x * y;
    float sub = x - y;
    float div = x / y;
    printf("Sum of x and y is %f \n", sum);
   printf("Mult of x and y is %f \n", mult);
    printf("Sub of x and y is %f \n", sub);
    printf("Div of x over y is %f \n", div);
    
    return 0;
}