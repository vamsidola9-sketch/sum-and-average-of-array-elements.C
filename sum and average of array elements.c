#include<stdio.h>
int main()
{
    int n,i,arr[100];
    float sum=0;
    printf("enter number of element:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];

    }
    printf("sum=%.2f\n",sum);
    printf("average=%.2f\n",sum/n);
    return 0;
}
