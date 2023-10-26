 /*The distance of a marathon in Kilometers*/
 #include <stdio.h> 
/* #include is a preprocessor command
  .h is an extension that intent that means a header file,
   and that means that in this file which will be included 
   automatically with our program.
 So it's called pre-processor because it happens before the C code is compiled. So extra code gets added, and that code is the code that we're going to need for doing printf. 
 Without it the printf would be undeclared.*/

int main (void) /*Then we start the actual code, and that's with the keyword int which means that the function called main, and almost always, fact in our beginning course, everything will always have a main. Main will be where the program executes from, that's understood by the C system. 
 Void is another key word meaning no arguments.
 So int is a keyword meaning that the program returns an integer.
 Void is a key word that would if it's used as a data type means it's an undefined data type, or in this case it means that the argument list is empty.
 */
 { //we see is this brace, an open brace means begin the code. 
    int miles = 26, yards = 385; //declaration with initialization. Miles and yards are identifiers
    double kilometers;

    kilometers = 1.609 * (miles + yards / 1760.0); // note 1760.0 The reason that we didn't choose to use 1760 is that yards is an integer, this would be an integer, and if we did this without making this in effect a double constant, then this would have given rise to 0. 
    printf("\nA marathon  is %lf kilometers. \n\n", kilometers);
    return 0;
 } /*So for this brace there's a closing brace, and this is called a compound statement. 
 It's a series of statements that is the executable code here.*/