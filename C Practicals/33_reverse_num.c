//print numbers in reverse order:-
#include<stdio.h>
int main(){
    int n,rev,b=0,i;
    printf("enter the value of n=");
    scanf("%d",&n);
    rev=0;
    while(n>0)
    {
        rev=n%10;
        b=(b*10)+rev;
        i++;
        n=n/10;
    }
    if(b==n)
    {
        printf(" yes = %d",b);
    }
    else
    {
        printf(" no = %d",b);
    }
    
    return 0;
}