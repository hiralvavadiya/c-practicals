//enter lower case and print sentence :-
#include<stdio.h>
int main(){
    char a[100],i;
    printf("enter a=");
    fgets(a,100,stdin);

    for(i=0;a[i];i++)
    {
        if((i==0) && a[i]>97 && a[i]<=122)
        {
            a[i]=a[i]-32;
        }
        else if(a[i]==46)
        {
            if(a[i+1]==32)
            {
                if(a[i+2]>97 && a[i+2]<=122)
                {
                    a[i+2]-=32;
                }
            }else if(a[i+1]>97 && a[i+1]<=122)
            {
                a[i+1]-=32;
            }    
        }
    }
    int val = puts(a);
    
    return 0;
}