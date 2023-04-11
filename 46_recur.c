//recurtion:-
#include<stdio.h>
int fact (int n)
{
    int f;
    if(n==1)
    {
        return 1;
    }
    else
    {
        f=n*fact(n-1);
        return f;
    }
}
int main()
{
    int n=5,f;
    f=fact(n);
    printf("\n factorial=%d",f);
    int getch();
}