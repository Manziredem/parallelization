#include <stdio.h>

int main(){
    int day = 6;

    switch (day)
    {
    case 1:
        printf("Mon");
        break;
    
    case 2:
        printf(" \n Tues \n \n ");
        break;

    case 3:
        printf(" \n Wedn \n \n ");
        break;
    
    case 4:
        printf(" \n Thus \n \n ");
        break;

    case 5:
        printf(" \n Fri \n \n ");
        break;

    case 6:
        printf(" \n Sat \n \n ");
        break;

    case 7:
        printf(" \n Sun \n \n ");
        break;
    
    default:
        printf("\n Wrong day! \n \n ");
     
    }


return (0);
}