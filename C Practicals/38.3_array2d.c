//summation of the array:-
#include<stdio.h>
int main(){
    int a[100],n,i,sum=0;

    printf("enter the value of n=");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("a[%d]",i);
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        printf("\na[%d]=%d",i,a[i]);
    }
    printf("\nsum=%d",sum);

    return 0;
}