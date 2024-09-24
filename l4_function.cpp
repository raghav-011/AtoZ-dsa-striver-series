/*
Functions:- set of code to perform a specific task. when we want to use same code at multiple times we use this concept.
purpose:- code reusability, breaks a program into smaller, manageable pieces, making it easier to read.
also for the abstraction i.e. if we want to hide the information details from the user and only want to show the necessary part of the code.

how to use:- 
1). Declaration: before calling a function, it can be declared (function prototype).
2). Definition: where the function's behavior is defined.
3). function Call: call the  function in the emain program or another function using its name and passing appropriate arguments.

*/

#include<iostream>
using namespace std;

void msg() {
    cout << "Hello World!"; // void function that not return any type of value.
}

int add(int number1, int number2) //function declaration and defination
{
    return number1 + number2;  //return integer value as we created a integer function
}
int factorial(int n) { //recursive function
    if (n <= 1)
    {
    return 1;
    }
    return n * factorial(n - 1);
}
int main()
{
    int num1 = 6, num2 = 49;
    int res1, res2;
    res1 = add(num1, num2); //function calling with num1 and num2 arguments
    msg(); //calling void function.
    cout << endl;
    cout << "the sum is" << res1 << endl;
    res2 = factorial(num1); //calling recursive function
    cout << "the factorial of number1 is: " << res2 << endl;
    return 0;
}

/*
Types :-
1). Built-in:- like cout, cin etc.
2). user defined:-
a). value return:- function that returns some value like above example.
b). void function:- not return any value.
c). recursive:- function calls itself to solve a particular problem. 
d). function overloading:- multiple functions have same name but different parameters.

Parameter and Argument: Parameters are variables in the function definition, while arguments are the actual values passed to the function.
Pass by Value: A copy of the argument's value is passed to the function.
Pass by Reference: A reference (address) to the original variable is passed, allowing the function to modify the original variable.
Return Type: The data type of the value returned by the function must match the specified return type.
Function Scope: Variables declared inside a function are local to that function and cannot be accessed outside it.
Default Arguments: You can specify default values for function parameters, allowing the function to be called with fewer arguments.
*/