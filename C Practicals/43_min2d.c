//print the minimum value in 2d array:-
#include<stdio.h>
int main(){
    int a[100][100],n,i,j,min;
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
    min=a[0][0];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]<min)
            {
                min=a[i][j];
            }
            printf("%d",a[i][j]);
        }
    }
    printf("min=%d",min);

    return 0;
}