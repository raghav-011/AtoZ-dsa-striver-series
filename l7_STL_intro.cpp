/*
STL:- Standard Template Library. it is a collection of pre-built or pre-defined templates.
that provides:-
a). Containers
b). Algorithms
c). Functions
d). Iterators

by the help of STL, we dont need to write the code from scratch and also no need to worry about memory management, performance optimization.
it  is efficient in both :- time and space complexity. */

#include<iostream>
#include<utility>
#include<string>
/* pair:- utility library's part, to store the values in couple/ pairning format. values in the pair can be different or the same.
mostly used in terms of key, value pair.
*/
using namespace std;
int main()
{
pair  <int, int> p1 = {1,3};
pair <int, string> p2 = {1, "Raghav"};

cout << p1.first << endl; // access first value of p1
cout << p2.second << endl; // access second value of p2

pair<int, pair<int, string>> p3 = {1, {5,"Raghav"}}; //pair nesting property

cout << p3.first << endl;
cout << p3.second.first << endl;
cout << p3.second.second<< endl;

// pair array

pair<int, int> arr[] = {{1,2}, {3,4}, {5,6}};
cout << arr[1].second << endl;
cout << arr[2].first << endl;

    return 0;
}

/*
containers:- are the objects, that store collections of data like array/ list but with the pre-defined functionality.

types:- a). sequence containers :- maintain the data in linear manner
like
vectors(dynamic array)
deque(double ended queue)
list(double linked list)

b). associated container:- elements store in a sorted order based on keys.
like
set (unique element, sorted)
map (key, value pair, sorted)

c). unordered container:- no perticular order and using hashing for quick lookups.
like
unordered_map(key, value pair, unsorted)
unordered_set(unique elements, not sorted)

d). containers adapters:- difference interfaces for existing containers
like
stack
queue
priority queue

*/