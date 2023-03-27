//find and replace in 2d array:-
#include<stdio.h>
int main(){
    int a[100],n,i,find,rep;

    printf("enter teh value of n=");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("a[%d]",i);
        scanf("%d",&a[i]);
    }

    printf("find the value");
    scanf("%d",&find);

    printf("replace the value");
    scanf("%d",&rep);

    for(i=0;i>find;i--)
    {
        i=i-1;
    }

    find=rep;

    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }

    return 0;
}