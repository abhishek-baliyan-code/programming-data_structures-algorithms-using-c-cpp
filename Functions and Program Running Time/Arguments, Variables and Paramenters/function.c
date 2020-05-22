/*
    https://youtu.be/m7bLRGibJfQ

    Funtions Arguments

        - Arguments (parameters): Input for the function blackbox

        - In the function definition: formal arguments (formal parameters)
            - formal parameters: a name that is used inside the function body 
                                to refers to its arguments.
        
        - In the function call: actual arguments (actual parameters)
            - The actual arguments are values that are assigned to the corresponding
              formal parameters.
            - The actual argument can be constant, a variable, or an even more 
              elaborate expression.
            - The actual argument is evaluated, and its values is copied to the 
              corresponding formal parameter for the function.

        
    Lifetime and Scope

        - Lifetime: Period of time when a memory location is allocated.
        - Scope: Region of program where decleration is visible
        - Scope: local variables and formal parameters => valid only in the body of the function

    
    Call by Value
        In c, function arguments are passed "by value"
        - Values of the arguments given to the called function are temporary variables
          rather than originals
        - the modification of the parameter variables do not affect the variable in the 
          calling function

    "Call by reference"
        - variable are passed by refernce
            - subject to modification by function
        - achieved by passing the "address of" variables
*/

/*  --------    Example of "call by value"     -----------*/
#include <stdio.h>
int test (int, int, int);       // Function Prototype

int main (void)
{
    int p = 1, q = 2, r = 3, s;

    s = test(p, q, r);          // p, q and r are ACTUAL arguments. s is assigned 9;
                                // p, q and r don't change. Only their copy do
    return 0;
}

// function definition
int test (int a, int b, int c)  // a, b and c are FORMAL arguments 
{
    int total;                  // total is LOCAL argument
    total = a++ + b++ + c++;
    return total;
}

/*  --------    Example of "call by reference"     -----------*/
// #include <stdio.h>
// void quoRem (int, int, int*, int*);     //  pointer

// int main (void)
// {
//     int a, b, quo, rem;
//     scanf ("%d %d", &a, &b);
//     quoRem (a, b, &quo, & rem);     // Passing address
//     printf ("%d, %d\n", quo, rem);
    
//     return 0;
// }

// void quoRem (int x, int y, int *quoAdr, int *remAdr)
// {
//     *quoAdr = x / y;           
//     *remAdr = x % y;
// }
