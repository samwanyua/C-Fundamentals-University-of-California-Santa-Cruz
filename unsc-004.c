/*Conversion of Fahrenheit to Celsius
C = (F - 32)/ 1.8
*/

#include <stdio.h>

int main(void)
{
    int fahrenheit, celsius;
    printf("Please enter fahrenheit as an integer: ");
    scanf("%d",&fahrenheit); // the ampersand means, shove it in the address of Fahrenheit.
    celsius = (fahrenheit - 32)/1.8;
    printf("\n%d fahrenheit is %d celsius.\n", fahrenheit, celsius);

    return 0;
}