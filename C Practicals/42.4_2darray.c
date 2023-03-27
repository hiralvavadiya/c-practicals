//column-wise summation:-
#include<stdio.h>
int main(){
    int a[100][100],i,j,n,sum=0;
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
        for(j=0;j<n;i++)
        {
            sum=sum+a[i][j];
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    printf("sum=%d",sum);

    return 0;
}