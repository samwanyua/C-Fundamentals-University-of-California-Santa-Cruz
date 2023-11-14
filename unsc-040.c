/*Storage class*/
#include <stdio.h>

extern int reps = 0; // The item should exist throughout the execution of the code


void f (void)
{
    static int called = 0;
    printf ("f called %d\n", called);
    called++;
    reps = reps + called;
}


int main(void)
{
    auto int i = 1;
    const int Limit = 10;
    for ( i = 1; i < Limit; i++)
    {
        printf("i local = %d, reps global = %d\n", 1, reps);
        f();
    }

    return 0;
}