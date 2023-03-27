//2
//24
//246
//2468
//246810
#include<stdio.h>
int main(){
    int i,j,a,b,c,d;
    a=1;
    b=5;
    c=2;
    
        while(a<=b)
        {   
            d=c*a;
            a++;
            printf("%d",d);
        }
        for(i=2;i<=d;i++)
        {
            for(j=2;j<=i;j++)
            {
                printf("\n%d",j);
            }
            printf("\n");
        }
    return 0;
}