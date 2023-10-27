/*Logical Operators, expressions and short-circuit evaluation*/

#include <stdio.h>

int main(void) {

    int outside, weather;
    printf("\nEnter if outside 1 true 0 false: ");
    scanf("%d",&outside);

    printf("\nEnter if rain 1 true 0 false: ");
    scanf("%d",&weather);

    if(outside && weather){
        printf("\nPlease use an umbrella\n");
    }
    else {
        printf("\nDress normally\n");
    }

    /*
    How to evaluate: A && B     Results
            cases:   T    T       T       ...where T = True, F = False
                     T    F       F
                     F    T       F
                     F    F       F          *** This is a Truth Table
    
     Again if we recall on short-circuit evaluation, anytime the first argument
    determines the overall result in this case when the first argument evaluates false, 
    we needn't evaluate the second argument. So we avoid evaluating the second argument. 
    That's called short circuit evaluation.       
    
    
    */

        return 0;
}
