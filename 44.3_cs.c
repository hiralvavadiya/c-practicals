//print the number of character if the ASCII value is in the loop (upper case):-
#include<stdio.h>
int main (){
    char a[100],i,cnt =0;
    printf("enter a=");

    fgets(a,100,stdin);

    for(i=0;a[i];i++)
    {
        if(a[i]>65 && a[i]<=95)
        {
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}