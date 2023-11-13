/* Oddball operators - conditionals and comma*/

#include <stdio.h>

int main (void)
{
    /*
    we have conditional operators (? :)
     comma (,)


     c = ( a<b)? a:b
     meaning
     if (a<b)
     then c= a;
     else c= b;
    >> The general syntax is there's an expression typically
     the expression that's taken to be zero and non-zero. 
     Then depending on the expression, it evaluates either 
     expression one, the true part or expression two here, 
     the false part. Another characteristic of this is very
     low and precedence so it occurs as one of the last things 
     that would be evaluated. So third lowest precedence among
     the 16 levels of precedents in the language. It's also unique
     in that it's the only ternary operator in C.

    Comma Operator
    expression1, expression2
    exp1 is evaluated then exp2
     
    it is the lowest precedence operators
    tenary operator and conditional operators are the third lowest
    #it is a sequence point - when you see a semicolon ending a statement.
    '=' is an assignment operator

    for (sum = 0, i = 1;
        i < = 50;  i++)
        sum += i;
    #what the loop does: sum initialized to 0, i to 1
    sum = 1 + 2 + 3 + ... 50
    
    */
   int a = 0, b = 1;
   int c = (a =0, b = 1);
   // then  c = ((a=0), (b = 1))'
   printf("c = %d\n",c);

    return 0;
}