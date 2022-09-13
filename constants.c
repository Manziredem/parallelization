// Date: Sept 12
// Name: Red
// Topic: Constants

# include<stdio.h>
# include<math.h> // for math fns

int main(){
    int x = 10;
    int y = 7;
    int z = 4;
    int m = 4;
    const int p = 5;
    
    printf(" \n x+=6 is equal to  %d \n \n", x+=6);
    printf("Hey there, I'm a constant %d \n \n", p);
    printf("y-=7 equal to   %d \n \n", y-=7);
    printf("z=pow(z,4) equal to %d \n \n ", z=pow(z,4));
    printf("m^=4 equal to %d \n \n ", m^=4);

    return 0;
}