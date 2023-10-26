/*Fundamental Types Declaration and Assignment*/

#include <stdio.h>

int main(void)
{
    /*
    Declarations
    types: int, double, float, char...
    type identifier;  ex. int a;
    type identifier = initialization; ex. int a = 2;
    type declaration list; ex. int a=3, b=5;
    
    */

   int a =5, b = 7, c = 6; //declare and intialize
   double average = 0.0; // initializing variables

   printf("a = %d, b = %d, c = %d\n", a,b,c);
   average = (a+b+c)/3.0; //conversion if 3. PS prevents errors in round off
   printf("Average = %lf\n", average);

    return 0;
}