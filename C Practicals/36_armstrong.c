//armstrong number:-
#include <stdio.h>

void main(){
    int n,r,sum=0,ans;

    printf("Input  a number: ");
    scanf("%d",&n);

    for(ans=n;n!=0;n=n/10){
         r=n % 10;
         sum=sum+(r*r*r);
    }
    if(sum==ans)
         printf("%d is an Armstrong number.\n",ans);
    else
         printf("%d is not an Armstrong number.\n",ans);

}
