/* if and relations and flow of control*/

#include <stdio.h>

int main(void)
{
   int speed;
   printf("\nEnter your speed as an integer: ");
   scanf("%d",&speed);

   if (speed < 65){
    printf("\nNo speeding ticket\n");
   }
    else {
        printf("\nSpeeding ticket\n");
    }
    /*
    use of if-else

    if (expression)
        statement
    else 
        statement
    
    
    */




    return 0;
}