#include <stdio.h>
#include <stdlib.h>

int main(){
    float c = 0.65;
    double c2 = 0.65;
    int x = 7;
    float y = 6.2;
    float z = c * x / y ;
    double z2 = c2 * x / y;
    printf("The 1st answer is %f \n", z);
    printf("The 2nd answer is %lf \n", z2);
    return 0;
}