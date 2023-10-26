#include <stdio.h>

int main(void)
{
    /*
    -- Expression & Evaluation --
    / divide (int or double)
    % modulus operator
    ++ -- increment and decrement operator
    3/7 is 0
    7/3 is 2
    5/2.0 is 2.5 (float)
    3%7 is 3
    7%3 is 1

    --pre/post increment
    a = ++ b;  pre- increment
    b = b + 1; a = b; (explanation)

    post increment
    a = b ++;
    a = b; b = b + 1;
    
    */

   int a = 5, b = 7, c = 0, d = 0; //intialize
   c = a - b;
   printf("a = %d, b = %d, c = %d, d = %d\n", a,b,c,d);

   c = b - a;
   printf("a = %d, b = %d, c = %d, d = %d\n", a,b,c,d);

    c = a/b; d = b/a;
    printf("a = %d, b = %d, c = %d, d = %d\n", a,b,c,d);

    c = a%b; d = b%a;
    printf("a = %d, b = %d, c = %d, d = %d\n", a,b,c,d);

    c = -a - b; d = -b -a;
    printf("a = %d, b = %d, c = %d, d = %d\n", a,b,c,d);

    c = ++a + b++; d+=5;
     printf("a = %d, b = %d, c = %d, d = %d\n", a,b,c,d);
    return 0;
}