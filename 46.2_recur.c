//recurtion for counting the numbers:-
#include<stdio.h>
int count(int n)                 // function define
{
    static int c=0;
    if(n==0)//12                 //condition
    {                
        return 1;
    }
    else
    {
        c++;
        count(n/10);//12                    //recurtive function call       
    }   
    return c;
}
int main ()
{
    int n,c;
    printf("enter the number =");
    scanf("%d",&n);
    c=count(n);                              //function call
    printf("number of digits are=%d",c);
    return 0;
}