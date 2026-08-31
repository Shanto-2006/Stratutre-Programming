#include <stdio.h>

int main()
{
    int b,a[10];
   
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<10;i++){
        printf("\n\nNext numbers=%d\n",a[i]);
    }
    printf("sum of numbers=%d",b=a[0]+a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]+a[8]+a[9]);

    return 0;
}
