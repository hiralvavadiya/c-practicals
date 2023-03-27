// print numbers using two variables:-
#include<stdio.h>
int main(){
    int n1,n2;
    printf("enter the value of n1=");
    scanf("\n%d",&n1);

    printf("enter the value of n2=");
    scanf("\n%d",&n2);
    while(n1<=n2)
    {
        printf("\n%d",n1);
        n1++;
    }

    return 0;
}