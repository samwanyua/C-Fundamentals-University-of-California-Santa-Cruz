/*Write a program that can give the sine of a value between 0 and 1 (non inclusive)
By @wanyua
27th October 2023*/

#include <stdio.h>
#include <math.h>

int main(void) {
    double angle;
    double sine;

    printf("Enter an angle in radians that is between 0 and 1: ");
    scanf("%lf", &angle);

    if (angle >= 0.0 && angle <= 1.0) {
        sine = sin(angle);

        printf("The sine of %lf is %lf\n", angle, sine);
    } else {
        printf("Try again! Please enter an angle between 0 and 1.\n");
    }

    return 0;
}
