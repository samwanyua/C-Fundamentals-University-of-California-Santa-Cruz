#include <stdio.h>

int main(void)
{
    int a =1;
    int b = 2;
    int c;
    c = a + b; // C is assigned the value of a +  b
    printf("Total: %d\n",c);
    // c becomes 3

    /*precedence 
    
    * is of higher precedence than binary + -
     How operators associate
     a + b + c
     ((a+b)+ c) left to right

     a = b = c = 3;
     (a=(b=(c=3))) right to left
    
    */


    return 0;
}