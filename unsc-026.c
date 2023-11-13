/*Ternary-operator code example*/
#include <stdio.h>

int main(void)
{
    int speed;
    printf("\n Enter your speed as an integer: ");
    scanf("%d", &speed);

    speed = ( speed <=65)? (65) : (speed <=70)? (70) : (90);
    switch (speed)
    {
    case 65: printf("\n No speeding ticket\n\n"); break;
    case 70: printf("\nSpeeding ticket\n\n"); break;
    case 90: printf("\nExpensive speeding TIcket\n\n"); break;
    default: printf("\nIncorrect speed\n\n"); //unneeded
    }
   
    return 0;
}