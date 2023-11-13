/*Function that prints a table of values for sine and cosine between (0, 1)*/
#include <stdio.h>
#include <math.h> // header file that provides declarations for mathematical functions

void SincosTable() {
    printf("Angle (in degrees)\tSine\tCosine\n");

    for (double angle = 0.0; angle <= 1.0; angle += 0.1) {
        double radians = angle * M_PI / 180.0; //M_PI is used to convert 90 degrees to radians
        double sineValue = sin(radians);
        double cosineValue = cos(radians);

        printf("%f\t%f\t%f\n", angle, sineValue, cosineValue);
    }
}

int main(void ) {
    SincosTable();

    return 0;
}
