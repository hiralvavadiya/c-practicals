//char and string :-
#include<stdio.h>
#include<string.h>
int main (){
    char a[100];
    printf("enter a=");
    //scanf("%s",&a);

    //getc(char a);
    while(fgets(input,a,stdin)!=NULL)
    {
          printf("\na=%s",a);
    }
    printf("\na=%s",a);

    return 0;
}