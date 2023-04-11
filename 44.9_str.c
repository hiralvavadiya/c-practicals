// word count :-nope
#include<stdio.h>
int main(){
    char a[100],i;
    int cnt =1;
    printf("enter a=");
    fgets(a,100,stdin);

    for(i=0;a[i];i++)
    {
        if(a[i]==32 || a[i]=='\n')
        {
            cnt++;
        }
    }
    printf("\ncnt = %d",cnt);
    int val = puts(a);

    return 0;
}