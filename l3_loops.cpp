/* Loops:- in programming, when we want to run a certain block of code multiple times, until the required condition met, we use the concept of loops.
Features:-
1). Repetition: loops repeat the tasks and execute the code numbers of time.
2). Condition: Each loop has a condition that determines when the loop should terminate.
3). Control Variables: Loops often use control variables to track iterations.
4). Flexibility: Loops can iterate over various data structures, such as arrays or vectors.

why use:- we use the loops for efficiency to avoid the redundancy of the code, and make the program shorter and effective.
also use for dynamic execution bcz loops can handle varying numbers of iterations based on user input or data size.

properties:- 3
a). initialization:- entering in a loop, firstly a control variable is initialize 
b). condition:- if the  condition is true, then run the statement or the block of the code.
c). updation and check the condition:- after that, control variable updated and again check the condition.

types:- 3
1). for  :- for(initialization; condition; updation){ block of code }
2). while :- while(condition){ block of code }
3). do while :- do{ block of code} while(condition);


nested for loop:- nest one for loop inside the other. it is very useful for multi dimensional data structure and 2-D array and patterns. 
*/
#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int b=3;
    for(int i=0; i<a; i++) //when the number of itiration is known, we use it.it checks the condition before each iteration. then run gthe code if the condition is true and after that update the value and again checks until the condtion fails.
    {
        cout << "this  is a simple example of for loop" << endl;
    }

    while(b<a) // we use, when the number of iteration is unknown. it also checks the condition before each iteration. then execute and againg checks.
    {
        cout << "this is a while loop" << endl;
        b++; //incrementing variable b
    }
    
    do //Executes the code block first, then checks the condition. It guarantees at least one execution. it checks the condition after the each iteration.
    {
        cout << "do while is running" << endl;
        a--;
    } while (a>3);


    
    int n=5;  //nested for loop 
    for ( int i = 1; i <= n; i++)
    {
    for ( int j = 1; j <= i; j++)
    {
    cout<<'*';
    }
    cout<<endl;
    }
    
    return 0;
}