/*
list: dynamic in nature, and provide doubly linked list implementation. i.e. each element in the list conatains a reference (pointer)
to both the next and the previous element. 
It does not provide random access via index but efficient in insertion and deletion at any position in constant time.

syntax: list <datatype> variable_name

oprations:
adding the element :- push_back(), push_front()
accessing:- since not support random access so we use iterator
for(auto itr = list_name.begin(); itr != list_name.end(); itr++)
{
cout << * itr << " ";
}

remove element:- pop_back(), pop_front()
inserting:- insert(iterator position, value)
auto itr = list_name.begin();
list_name.insert(itr, 15);
clear, empty, size, erase

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    list <int> mylist;
    mylist.push_back(10);
    mylist.push_back(20);
    mylist.push_back(30);
    mylist.push_back(40);

    for(int value : mylist)
    {
        cout << value << " ";
    }
    cout << endl;

    mylist.pop_front();
    mylist.pop_back();

    auto itr = mylist.begin();
    mylist.insert(itr, 20);

    for(int val : mylist)
    {
        cout << val << " ";
    }
    cout << endl;
    cout << mylist.size() << endl;
    mylist.clear();


    return 0;
}