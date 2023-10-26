#include <stdio.h>

int main(void)
{
    int a =1;
    int b = 2;
    int c;
    c = a + b; // C is assigned the value of a +  b
    printf("Total: %d\n",c);
   
    /*
    OPERATOR PRECEDENCE CHART
     Primary expression Operators () [] -> expr++ expr--
     Unary Operators * & + - ~ ++expr  --expr (typecast)
     Binary Operators   * / %
                        + -
                        >> << 
                        < > <= >=
                        == !=
                        & 
                        ^
                        |
                        &&
                        ||
                                         left to right
    Tenary Operator  ?;  right to left
    Assignment Operators  = += -= /= %= >>= <<= &= ^= |= right to left
    Comma ,  left to right 
    
    
    */


    return 0;
}