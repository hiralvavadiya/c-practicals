//print the number of string :-
#include<stdio.h>
int main (){
    char a[100],i,cnt=0;
    printf("enter a=");
    
    getc(char a);

    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]>65 && a[i]<=90)
        {
            cnt++;
        }
    }
    printf("\nnumber of string=%d",cnt);

    return 0;
}