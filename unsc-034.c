/*Demostrate loop with while*/

#include <stdio.h>

void wrt_very(int count) //function definition
{
    while(count > 0)
    {
        printf("\nvery much");
    }

    printf(" much. \n\n");

}

int main (void)
{
    int repeat = 0;
    printf("How passionate are you 1-10: ");
    scanf("%d",&repeat);
    printf("\nI am very passionate");
    wrt_very(repeat);
    
    return 0;
}