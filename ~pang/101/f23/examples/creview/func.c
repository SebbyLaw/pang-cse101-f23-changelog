// pass a function as a parameter
// from: https://jraleman.medium.com/c-programming-language-passing-a-function-as-a-parameter-90d52fe842ea

#include <stdio.h>
void printNumber(int nbr)  
{
    printf("%d\n", nbr);
}
void myFunction(void (*f)(int))  
// parameter f is a pointer to a function which has a void 
// return type and which takes an int parameter.
{
    for(int i = 0; i < 5; i++) 
    {
        (*f)(i);	// calling the passed function param and giving it an int param
    }
}
int main(void)  
{
    myFunction(printNumber);	// passing printNumber as the function param
				// actually passes a pointer to the function
    return (0);
}
