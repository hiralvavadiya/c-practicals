//print minimum number in array:-
#include<stdio.h>
int main(){
    int a[100],n,i,min;
    printf("enter the value of n:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("a[%d]",i);
        scanf("%d",&a[i]);
    }
    min=a[0];

    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
        printf("%d",a[i]);
    }
    printf("min=%d",min);

    return 0;
}