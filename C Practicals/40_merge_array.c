//merge 2 array into 3:-
#include<stdio.h>
int main(){
    int a1[100],a2[100],a3[100],i,j=0,n1,n2;
    printf("enter the value of n1=");
    scanf("%d",&n1);

    for(i=0;i<n1;i++)
    {
        printf("a1[%d]",i);
        scanf("\n%d",&a1[i]);
    }
    printf("enter the value of n2=");
    scanf("%d",&n2);

    for(i=0;i<n2;i++)
    {
        printf("a2[%d]",i);
        scanf("\n%d",&a2[i]);
    }

    for(i=0;i<n1;i++)
    {
        a3[j]=a1[i];
        j++;
    }

    for(i=0;i<n2;i++)
    {
        a3[j]=a2[i];
        j++;
    }
    
    for(i=0;i<n1+n2;i++)
    {
        printf("\n%d",a3[j]);
    }

    return 0;
}