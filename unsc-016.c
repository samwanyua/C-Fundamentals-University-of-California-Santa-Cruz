/*
The program has a mistake. Redo the program in a text file 
and upload it by clicking "upload file" below. Your peers 
will then review your submission to see whether you have 
appropriately fixed the errors.

The following code is supposed to produce the volume of a
sphere as a double but is using ints. Fix this issue.

*/

#include<stdio.h>
#define PI 3.14159
int main(void)
{ 
int radius;

printf("Enter radius:");
scanf("%d", &radius);

double volume = (4.0 / 3.0) * PI * radius * radius * radius;

printf("volume is : %lf \n\n", volume);
return 0;
}