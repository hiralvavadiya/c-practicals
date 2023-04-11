//convert lower case to upper case :-
#include<stdio.h>
int main (){
    char a[100],i;
    printf("enter a=");
    fgets(a,100,stdin);

    for(i=0;a[i];i++)
    {
        if(a[i]>=97 && a[i]<=122) 
        {
            a[i]=a[i]-32;
        }
        else if(a[i]==32)
        {
            if(a[i]>=97 && a[i]<=122) 
            {
                a[i]-=32;
            } 
        }
    }

    int val = puts(a);
    return 0;
}