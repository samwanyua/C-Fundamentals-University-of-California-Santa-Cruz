/*Fundamental Types and Sizeof*/

#include <stdio.h>

int main(void)
{
    /*
    
    C fundamental types

    char 'a', '5', '\n'
    int 0, -3, 99
    double 1.3234, 3.2e5 (e is an exponent ie to a power of 10, 10^5)
    modifiers:
        unsigned apply to int 
        long both int and doubles(increase the range significantly)
    float, double, long double

    byte is 8 bits
    ex. 00001010 = 20
    int is 4 bytes (-2147483648 to +214783647) roughly 2^32-1

    sizeof(type)


    */
    int a =5, b = 7, c = 6; //declare and intialize
    double average = 0.0; // initializing variables
    char ch = 'e';

    printf("on my system\n");
    printf("int is %lu bytes\n", sizeof(int));
    printf("long int is %lu bytes\n", sizeof(long int));
    printf("char is %lu bytes\n", sizeof(ch));
    printf("float is %lu bytes\n", sizeof(float));
    printf("double is %lu bytes\n", sizeof(double));
    printf("long double is %lu bytes\n", sizeof(long double));
    


    return 0;
}