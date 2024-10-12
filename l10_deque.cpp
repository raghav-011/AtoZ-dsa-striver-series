/*
deque:- double ended queue, insertion and deletion from both, the front and the back at constant time. it has random access
and also dynamic in size i.e. can modify or change the size.

syntax: deque <data_type> variable_name;

operations:- begin()
end()
rbegin()
rend()
front()
back()*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque <int> dq;
    dq.push_front(10); //enter the elementts
    dq.push_front(20);
    dq.push_front(30);
    dq.push_front(10);

    for(int value: dq)
    {
        cout << value << " ";
    }
    cout << endl;

    cout << dq[0] << endl; //accessing the element

    dq.pop_front();
    dq.pop_front();
    cout << dq.at(0) << endl;

    dq.push_front(60);

    cout << dq.size() << endl;
    dq.clear();

    if(dq.empty())
    {
        cout << "empty" ;
    }

    return 0;
}