// print multiplication table:-
#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter the value of n=");
    scanf("\n%d",&n);
    i=1;
    j=10;
    while(i<=j)
    {
        printf("\n%d * %d = %d",n,i,n*i);
        i++;
    }

    return 0;
}