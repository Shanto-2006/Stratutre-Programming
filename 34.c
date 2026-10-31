
#include <stdio.h>

int main()
{
    int p;
    scanf("%d",&p);
    printf("input = %d\n",p);
    if(p<2){
        printf("infant");
        
    }else if(p>=2&&p<10){
        printf("Child");
    }else if(p>=10&&p<20){
        printf("teenage");
    }else if(p>=20&&p<30){
        printf("Adult");
        
    }else {
        printf("Old");
    }

    return 0;
}
