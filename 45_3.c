//with argument with return value :-
#include<stdio.h>
int demo(int a,int b)
{
    int c;
    c=a+b;
    return c;
}
int main()
{
    int a,b,sum;
    printf("enter a=");
    scanf("%d",&a);
    printf("enter b=");
    scanf("%d",&b);
    sum=demo(a,b);
    printf("%d",sum);
    int getch();
}