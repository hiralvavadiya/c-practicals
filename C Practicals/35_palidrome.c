//palidrome number:-
#include <stdio.h>

int main() {
    int n, n1, b = 0, rev;
    
    printf("Enter any number: ");
    scanf("%d", &n);    
    n1 = n;
    
    //logic
    while (n > 0){
        rev = n % 10;
        b = b * 10 + rev;
        n = n / 10;
    }
    
    if (n1 == b){
        printf("Given number is a palindromic number"); 
    }
    else{
        printf("Given number is not a palindromic number"); 
    }    
    return 0; 
} 