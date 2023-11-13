/* Funtion Prototype code example*/
#include <stdio.h>

double square (double); //prototype
double cube (double); //prototype

int main (void)
{
    int how_many = 0, i, j;
    printf("I want square and cube for 1 to n where n is: ");

    scanf("%d", &how_many);
    printf("\n square and cubes by interval of .1\n");

    for (i = 1; i <= how_many; i++) //outer loop
        for (j = 0; j < 10; j++) //inner loop
            printf("\n%lf\t %lf\t %lf", i +j/10.0, square(i+j/10.0), cube(i + j/10.0));

    printf("\n\n");
   
    return 0;
}

double square (double x) //definition
{ return (x * x);}

double cube (double x) //definition
{ return (x * x * x);}