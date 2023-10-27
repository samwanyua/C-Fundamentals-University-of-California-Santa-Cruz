/*The integer and floating points types*/
#include <stdio.h>

int main(void)
{
    /*
    Float types in C: float, double, long double
    float : range 10^-38 to 10^38, with six significant figure
    as in 0.123456e12
    double range: 10^-308 to 10^308, 15 significant figures
    long double : 10^-308 to 10^308 but 31 significant figures
    float<= double <= long double
    literals
    1.0, 1., 0.1e1 (power of 10)
    NB: Significance in a computation 
    So when you're dealing with these numbers, they are not like real numbers from mathematics.
    >>conversion characters
    %e or %E prints as  1.23456e + 00
    %f print as 1.23456
    %g or %G  they pick from e or f and decide on which one to use based on what gives you the shortest representation.
    
    */

    return 0;
}