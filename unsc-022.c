/*While-code*/

#include <stdio.h>

int main (void)
{
    int repeat = 0;
    printf("How strong is your love for Chelsea 1- 10? : "),
    scanf("%d",&repeat);
    printf("\nI support Chelsea!\n");

    while (repeat > 0)
    {
       printf("Very much");
       repeat--;
    };
    printf("much\n\n");

    return 0;
}