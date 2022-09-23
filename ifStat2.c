#include <stdio.h>

int main () {

    float x = 2.65;
    int y = 8;
    float z = 4.06;
    float a = x + y * z; 
    float b = x * y; 
    // float an = x * y * z / a

// (v)
    if(x<y && y>z)
        printf(" \n (v. i) xyx/a = %f \n \n", x * y * z / a);
    else
        printf("x<y");

    if (x>y || y<=a && z>=b)
    {
        float ans = x*y/b;
        printf("\n (v. ii) x*y/b %f \n \n", ans);
    }
    else
    {
        // bool answ = false;
        // printf(" (v. ii) %B \n \n", answ);
        printf("\n (v. ii) False. \n \n");
    }
    
    
    return (0);
}