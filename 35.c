
#include <stdio.h>

int main()
{
    int p;
    scanf("%d",&p);
    printf("input = %d\n",p);
    switch(p){
        case 1:
        printf("Satarday");
        break;
        case 2:
        printf("Sunday");
        break;
        case 3:
        printf("Monday");
        break;
        case 4:
        printf("Tueasday");
        break;
        case 5:
        printf("wednessday");
        break;
        case 6:
        printf("thuesday");
        break;
        case 7:
        printf("Friday");
        break;
        default :
        printf("not a aday of week calander");
        break;
    }

    return 0;
}
