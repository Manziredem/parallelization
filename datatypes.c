// Date: Sept 12
// Name: Red
// Topic: Datatypes

# include<stdio.h>

int main(){
    int a;
    double b;
    float c;
    char d;
 
    printf("%lu", sizeof(b)); // out put is 8
    // printf("%lf", sizeof(b)); // this gives an error: datatypes.c:10:19: warning: format specifies type 'double' but the argument has type 'unsigned long' [-Wformat]

    // printf("%lu \n", sizeof(c)); // out put is 4
    // printf("%f \n", sizeof(c)); // same error 

    // printf("%lu \n", sizeof(d)); // out put is 1
    // printf("%c \n", sizeof(d)); // same error 

    return 0;
}