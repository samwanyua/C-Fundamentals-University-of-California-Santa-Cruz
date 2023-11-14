/*Simple Recursion*/
#include <stdio.h>

int main(void)
{
/* 
Recursion - doing things repeatedly
1. Iteraton
2. Recursion

simple recursion

void count_down (int n)
{
    while(n > 0)
    {
        printf("Time is %d\n\n");
        n--;
    }
    printf("Blast off!\n");
}

 or

 void recursive_count_down (int n)
 {
    if (n == 0)
    {
        printf("Blast off\n"); //Base case where blast off ( at n == 0)
    }
    else
    {
        printf("Time is %d\n",n);
        recursive_count_down(n-1);
    }
 }


Recursive case where you count 1 less, so it will terminate
it is easier to debug when your code is recursive

*/



    return 0;
}