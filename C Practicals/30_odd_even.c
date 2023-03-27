//print n1 & n2 even & odd :-
#include<stdio.h>
int main(){
    int n1,n2,n;
    printf("enter the value of n1=");
    scanf("\n%d",&n1);

    printf("enter the value of n2=");
    scanf("\n%d",&n2);

    while(n1<=n2)
    {
        n=n1%2;
        (n==0)?printf("\n%d is even",n1):printf("\n%d is odd",n1);
        n1++;
    }

    return 0;
}
