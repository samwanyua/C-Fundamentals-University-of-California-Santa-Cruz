/*The Iterative statement while*/

#include <stdio.h>

int main(void)
{

    /*
    The ehile statement
    while (expression)
        statement
    Semantics:
     >> check is expression is 0
     >> skip to the next statement
     >> is next expression 0?
     >> execute
     >> repeat
    example;

    while (i < 10){

        printf("i = %d", i);
        i++;
    }

    */

    int i = 0; 
    while ( i < 4){ 
    i++;
    printf("%d\n", i);
    }


    return 0;
}