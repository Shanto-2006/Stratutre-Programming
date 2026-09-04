
int main()
{
    int i,a[5];
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        printf("the numbers = %d\n",a[i]);
    }
    int  sum;
    int avg;
    for(i=0;i<5;i++){
        sum=sum+a[i];
    }
    printf("the number of sum = %d",sum);
    avg=sum/5;
    printf("the avg = %d",avg);
    return 0; 
}
