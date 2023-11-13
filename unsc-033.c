/*Function code example*/
#include <stdio.h>

int main (void)
{
    int repeat = 0;
    printf("How passionate are you 1-10: ");
    scanf("%d",&repeat);
    printf("\nI am very passionate");

    while(repeat > 0)
    {
        printf("\n very passionate");
        repeat--;
    }
    printf(" very much\n\n");
    
    return 0;
}