/*
Time Complexity:- not considered as how much time taken by a code bcz same code on several machines takes different time fr execution.
its depend on configuration.
TC != Time Taken

it is rate of which the time taken increases with respect to the input size.
Time Complexity measures in Big Oh [O() - inside () we write the time taken w.r.t the input size ]

Rules:-
1). Calculate TC, in worst case scenario:- as we want that system serves the maximum number of clients.
cases:- 3
a). best case:- least amount of time to get execute.
b). worst case:- maximum amount of time to get execute.
c). average:- between the best and the worst.

2). avoid constant:- O(6N^6 + 2N^4 + 7) where (N = 10^2) so 7 is very very less significant, so we avoid constant.
3). avoid lower values:- similar to the 2nd rule, since N^6 is large in its own, so avoid the N^4 or less than as they are less significant.
TC = O(6N^6) --> O(6*10^12) [avoid constant]
TC = O(10^12)



Space Complexity:- also called memory space.
also vary from machine to machine, so can not depend on the machine.
again we consider it in Big Oh notation.

It splits into 2 parts.
1). Auxiliary Space:- the space we take to solve the problem 
2). Input Space:- we take to store input.

int num1, num2;
cout << "enter the first number: " << endl; 
cin >> num1; // as we take input so it is input space
cout << "enter the second number: " << endl;
cin >> num2;
int res = num1 + num2; //res called auxiliary space bcz we take it for the store the solution of the problem
cout << "the result is: " << res <<  endl;

so, if we take an extra variable to solve a problem it is reffered as auxiliary space.

Note:- we take less space as store the result in input variable but not good practice in terms of software engineering.
this is a crucial rule that never do anything with the data, as data might be used in another place. so data should not be touched.
*/