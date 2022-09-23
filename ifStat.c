#include <stdio.h>
#include <time.h>

int main () {
    time_t sec;

    float x = 2.65;
    int y = 8;
    float z = 4.06;
    float a = x + y * z; // (i)
    float b = x * y; // (ii)
    float c = 5;
     c += z*x /y; // (iii)

    sec = time(NULL);
    printf("\n i) The time is %ld\n \n", sec); //prints the seconds
    printf("\n c = %f \n \n", c);
    // printf("y = %d \n", y);

    if (b>y) // they are different datatypes, therefore, they can't be compared in if statement
        printf(" ii. a) Yes, b>y \n \n");

    // b. and d. can't because c i incorrect

    if (a>=b)
        printf(" ii. a) yes, a>=b \n \n");
    else
        printf(" ii. c) no, a is not >=b \n \n");





    return(0);
}