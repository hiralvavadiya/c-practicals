//print reverse string :-
#include<stdio.h>
int main(){
    char a[20],i,cnt =0;
    printf("enter a=");

    fgets(a,20,stdin);

    for(i=0;a[i];i++)
    {
        if(a[i]>97 && a[i]<=122)
        {
            cnt++;
        }
    }

    for(i=i-1;i>=0;i--)
    {
       printf("%c",a[i]); 
    }

    return 0;
}