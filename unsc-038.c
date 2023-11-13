/* Function variables with call-by-value explained*/
#include <stdio.h>

int main(void)
{

/*
Function invocation
How parameters behave
ex.
int compute_sum_to_n (int n);
{
    int sum = 0;
    for ( ; n > 0; n--) //There is no beginning part meaning that nothing is done at the beginning
        sum +=n;
        return sum;
funcion call with int m = 5;
compute_sum_to_n(m);

Function invoked;
1. Each expression in arg list (parameters) is evaluated. eg m = 5
2. Conversion if necessary to type of parameter. eg if 3.5 * m were used
   evaluatio is 17.5 converted to now 17
3. Call by value
we call n_local as what is used inside execution of function
n_local = n; // n value is nver changed but a local value is changed

4. The function body is then excuted
5. The return statement when evaluated exits to where the function was called
6. If there is a return expression, the value of return is converted to the type of the function
7. If there is no return, it's as if a return was implicit in the last statement of the function code block

}






*/

    return 0;
}