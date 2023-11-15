/*Call by reference simulated*/
#include <stdio.h>

int main(void)
{
/* 
call-by-value is where arguments are passed in possibly 
variables from the calling environment. Inside the routine
they're manipulated, inside the function there manipulated. 
But when that function exits, those variables are unchanged.

* is a dereference
& is an address of
for example:
scanf("%d", &size);

passing parameters are called by value but can pass an address (a pointer)
we use this mechanism to achieve 'call by ref'

swap(a,b)
say a,b are int
a==2 b==5
what we want is a to be 5, and b to be 2

void swap(int i int j)
{
    int temp = i;
    i = j; j = temp;

} //won't work

but
void swap(int i, int j)
{

    int temp = *i;
    *i = *j;
    *j = temp;

} // works!
 
steps;
>> declare parameters as pointers
>> use dereference pointer in body  *p
>> pass in address 
swap(&a, &b)



*/


    return 0;
}