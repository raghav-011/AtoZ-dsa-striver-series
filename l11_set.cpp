/*
set: stores unique elements, ordered(sorted), typically implement as a self balancing binary search tree
time complexity: O(log n)
no random access
automic sorting in accending order
syntax: set <data_type> variable_name; */

#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> myset;
    myset.insert(10); // inserting the value
    myset.insert(5);
    myset.insert(3);
    myset.insert(9);
    myset.insert(4);
    myset.insert(13);
    myset.insert(5);  // no effect as duplicate value
    myset.insert(10); // no effect as duplicate value

    for(auto itr = myset.begin(); itr != myset.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;

    if(myset.find(10) != myset.end())
    {
        cout << "element is not stored as duplicate" << endl;
    }

    myset.erase(5);
    cout << myset.size() << endl;

    return 0;
}
