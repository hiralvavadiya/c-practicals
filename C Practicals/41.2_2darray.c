//summation in 2d array:-
#include<stdio.h>
int main(){
    int a[100][100],n,i,j,sum;
    printf("enter the value of n=");
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
            sum=sum+a[i][j];
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    printf("\nsum=%d",sum);

    return 0;
}