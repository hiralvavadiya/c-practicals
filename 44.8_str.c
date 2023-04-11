//print lower character and cnt the types of alphabets is used:-nope
#include<stdio.h>
int main (){
    char a[100],i;
    int cnt =0;
    printf("enter a=");
    fgets(a,100,stdin);

    for(i=0;a[i];i++)
    {
        if(a[i]>=0 && a[i]<=31 || a[i]>=33 && a[i]<=47 || a[i]>=58 && a[i]<=64 || a[i]>=91 && a[i]<=96 || a[i]>=123 && a[i]<=127)
        {
            cnt ++;
        }
    }
    printf("\nCNT = %d",cnt);
    int val = puts(a);

    return 0;
}