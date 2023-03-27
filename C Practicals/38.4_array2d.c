//array in reverse order:-
#include<stdio.h>
int main(){
    int a[100],n,i;

    printf("enter the value of n=");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\na[%d]",i);
        scanf("\n%d",&a[i]);
    }

    for(i=n;i>=0;i--)
    {
        printf("\na[%d]=%d",i,a[i]);
    }

    return 0;
}