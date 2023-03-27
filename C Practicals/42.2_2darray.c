//insert and position :-
#include<stdio.h>
int main(){
    int a[100],n,i,new,pos;

    printf("enter the value for n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
            printf("a[%d]",i);
            scanf("%d",&a[i]);
    }

    printf("position");
    scanf("%d",&pos);
    printf("insert the value");
    scanf("%d",&new);

    for(i=0;i>pos;i--)
    {
        a[i]=a[i-1];
    }

    a[pos]=new;

    for(i=0;i<n;i++)
    {
            printf("\n%d",a[i]);
    }

    return 0;
}