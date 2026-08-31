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
    int sum;
    for(int i=0;i<10;i++){
     b=sum+a[i];
    }
    
    printf("sum of numbers=%d",b);

    return 0;
}
