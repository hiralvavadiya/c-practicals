//print the maximum number from array:-
#include<stdio.h>
int main(){
    int a[100],n,i,max;
    printf("enter teh value of n:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("a[%d]",i);
        scanf("%d",&a[i]);
    }
    
    max=a[0];

    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        printf("%d",a[i]);
    }
    printf("max=%d",max);

    return 0;
}