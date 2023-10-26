#include<stdio.h>
#define PI 3.14159 // PI is an identifier 


int main(void)
{  
    /*
    main is an identifier
    int is a keyword
    _printf is an identifier
    underscores and alphabets are allowed including the first character

    */
    double area = 0.0, radius =0.0; // area and radius are identifiers
    printf("Enter radius: ");
    scanf("%lf", &radius); // scanf() and printf() are standard identifiers in IO library
    area = PI * radius * radius;
    printf("Radius of %lf meters; area is %lf sq. meters\n", radius, area);
      
    return 0;
}    