//10101
//1010
//101
//10
//1
#include<stdio.h>
int main(){
    int i,j;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=6-i;j++)
        {
            printf("%d",j%2);
        }
        printf("\n");
    }

    return 0;
}