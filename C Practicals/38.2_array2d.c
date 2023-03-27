//dynamic array:-
#include<stdio.h>

int main(){
    int a[100],n,i;

    printf("enter the value of n=");
    scanf("%d",&n);


    for(i=0;i<n;i++)
    {
        printf("a[%d]",i);
        scanf("\n%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        printf("\na[%d]=%d",i,a[i]);
    }

    return 0;
}