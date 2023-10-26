/*The Char type*/
#include <stdio.h>

int main(void)
{
    /*
    Allows us to do a lot of text processing
    char is a constituent in a string
    string is an array of char
    'x', '7', '\n'

    ASCII values are 0 -127

    Uppercase
    'A' is int value of 65
    lower case 'a' is 97

    Digits '0' is 48
            '9' is 57
    \n is is value 10 new line advance
    \a is 7 ring bell
    */

    char c = 'a';
    printf("c in ASCII is %d\n",c);
    printf("c the character %c\n",c);
    printf("Three consecutive chars are: %c%c%c \n", c, c+1, c+2);
    printf("Three bell rings chars are: %c%c%c\n", '\a', '\a','\a');
    

        return 0;
}