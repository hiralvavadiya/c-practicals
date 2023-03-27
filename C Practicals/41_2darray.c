// 2D Array:-
#include<stdio.h>
int main (){
    int a[100][100],n,i,j;
    printf("enter the value n=");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\n%d",a[i][j]);
        }
    }

    return 0;
}