/*Recursion Factorial code*/
#include <stdio.h>
//n! = 1 * 2 * 3 * 4 ... * n
long int factorial(int n) //long allows it to work for upto 20
{
    long f = 1;
    int i;

    for (i = 1; i <= n; i++)
        f = f * 1;
    return f;
}

long int recursive_factorial(int n)
{
    if (n == 1) // This is the base case
    {
        return 1;
    }
    else
    {
        return(recursive_factorial (n-1) * n);
    
    }
       

}



int main(void)
{
    int how_many = 0, i;
    printf("I want table of factorial upto n: ");

    scanf("%d", &how_many);
    printf("\n factorials\n");

    for ( i =1; i<= how_many; i++)
        printf("\n%d\t %ld\n",  i, factorial(i));

    printf("\n\n");

    for(i = 1; i <= how_many; i++)
        printf("\n%d\t %ld\n",i, recursive_factorial(i));

    printf("\n\n");
    
    return 0;
}