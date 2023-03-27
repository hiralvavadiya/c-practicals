//print maximun value from 2d array:-
#include<stdio.h>
int main(){
    int a[100][100],n,i,j,max;

    printf("enter the value of n:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    max=a[0][0];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
            }
            printf("\n%d",a[i][j]);
        }
    }
    printf("\nmax=%d",max);

    return 0;
}