//print the number of character if the ASCII value is in the loop (lower case):-
#include<stdio.h>
int main(){
    char a[1000],i,cnt =0;
    printf("enter a =");

    fgets(a,1000,stdin);

    for(i=0;a[i];i++)
    {
        if(a[i]>97 && a[i]<=122)
        {
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}