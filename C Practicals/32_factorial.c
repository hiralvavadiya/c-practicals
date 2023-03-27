//factorial:-
#include<stdio.h>
int main(){
    int n,i,f=1;
    printf("enter the value of n=");
    scanf("\n%d",&n);

    for(i=1;i<=n;i++)
    {
        f=f*i;
        printf("factorial of n=%d\n",f);
    }
    
    return 0;
}