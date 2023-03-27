//5
//54
//543
//5432
//54321
#include<stdio.h>
int main(){
    int i,j;

    for(i=5;i<=1;i--)
    {
        for(j=1;j<=i;i--)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}