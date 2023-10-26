/*The int type*/
#include <stdio.h>

int main(void)
{
    /*
    The data type int (short, long, unsigned)
    int is stored in 32 bits (4 bytes) with a range  (-21474836648 to 2147483647)
    short - use less data
    long - use more data
    unsigned (only wants data to be presented in positive)

    35 -int, 35L - Long, 35U - Unsigned, 35UL - unsigned long
    -- classic --
    2/3 is 0
    2.0/2 is 0.66666

      */
    short short_a = 5; //short int
    int normal_a = 67;
    unsigned unsigned_a = 67u;  
    long long_a = 67l;
    printf("short_a = %hd, divide by int 2 is %d\n", short_a, short_a/2);
    printf("short_a = %hd, divide by float 2 is %lf\n", short_a, short_a/2.0);
    printf("67 as a char is %c\n", normal_a);
    printf("sizes in bytes of short, int, unsigned, and long on my machine:");
    printf("%lu, %lu, %lu\n",sizeof(short_a), sizeof(normal_a), sizeof(unsigned_a), sizeof(long_a));


    return 0;
}