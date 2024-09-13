/* 
Conditional statement:- in programming languages, it is used for perform different actions based on the several conditions.
the basic fundamental concept is  a condition is evaluated, and based on whether it is true or false, the program executes the certain block of codes.
Types:-
1. if Statement
2. if-else Statement
3. else-if Ladder 
4. Nested if-else Statement
5. switch Statement
6. Conditional (Ternary) Operator
*/


#include<iostream>
using namespace std;
int main()
{
/*
1. if statement:- it checks whether the certain condition is true? if it is true, then it will execute.
ex:- 
int num1 = 10;
if(num > 6)
{
cout << "the condition is true" << endl;
}


2. if else statement:- it provides the alternative. if the condition is true: the certain block of code will execute and
if the conditon is false: other block of code will execute.
ex:- 
int num2 = 12;
if (num2 > 5) {
    cout << "number is greater than 5";
} 
else {
    cout << "number is less than or equal to 5";
}


3. else-if ladder:- when there are multiple conditions to check, we use it. if one condition is true, it will be executed and the rest of all will be skipped.
ex:-
int num3 = 15;
if (num3 > 10) {
    cout << "number is greater than 10";
} else if (num3 > 5) {
    cout << "number is greater than 5 but less than or equal to 10";
} else {
    cout << "number is less than or equal to 15";
}


4. Nested if-else:- A nested if-else structure is when an if or else statement is placed inside another if or else block. It allows for more complex decision-making by evaluating multiple conditions in a hierarchical manner.
ex:-
    int age = 20;
    int marks = 85;

    if (age > 18) {  // Outer if
        if (marks >= 80) {  // Inner if
            cout << "You are eligible for a scholarship.";
        } else {  // Inner else
            cout << "You are eligible, but no scholarship.";
        }
    } else {  // Outer else
        if (marks >= 80) {  // Another inner if
            cout << "You are not eligible due to age, but you have excellent marks.";
        } else {
            cout << "You are not eligible.";
        }
    }


5. Switch:- The switch statement is an alternative to the if-else-if ladder when checking the same variable against multiple possible values.
ex:- 
int day = 5;
switch (day) {
    case 1:
        cout << "Monday";
        break; //it ensures that the switch statement exits after the matching case is executed, preventing the execution of subsequent cases.
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;        
    default: //The default case serves as a safety net. If none of the cases match the expression, the code inside the default block will execute.
        cout << "Invalid day";
}

note:- Within a switch statement in C++, duplicates of case values are disallowed. Each case value must be distinct.

Potential for Nested Switch Statements :- 
While it's possible to nest one switch statement inside another in C++, 
this practice is generally discouraged due to its potential to introduce complexity and hinder code readability.

ex.:-

    int num4 = 3;
    int num5 = 11;

    switch (num4) {
        case 1:
            cout << "num is 1." << endl;
            switch (num5) {
                case 1:
                    cout << "number is 1." << endl;
                    break;
                default:
                    cout << "number is not 1." << endl;
            }
            break;
        default:
            cout << "num is not 1." << endl;
    }



6. Conditional (Ternary) Operator:-  shorthand way of writing an if-else statement.
ex:-
int x = 5;
int y = (x > 3) ? 10 : 20; // If x > 3, y is 10; otherwise, y is 20.
cout << y;  // Output: 10

*/
return 0;
}
