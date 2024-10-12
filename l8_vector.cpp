/*
vectors are dynamic in nature as an array is constant in size and we cannot change the size of an array.
Vector has the ability to change the size whenever elements are added or deleted. It also stores the element in contiguous memory locations.
syntax:- vector <obj-type> variable_name;
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <int> v1;
    v1.push_back(12); //insert or add or push the value
    v1.emplace_back(13); //insert or add or push the value, similar to push_back but faster

    vector <pair <int, string>> v2;
    v2.push_back({1, "Raghav"}); //must use {} with push_back if declaration in the pair
    v2.emplace_back(2, "Gupta"); //not necessary, it automatically assumes pair.

    vector <int> v3(4, 10); //4 is size and 10 values i.e., in all 4 indices put 10
    vector <int> v4(7); // only size
    vector <int> v5(v3); //copy the data of a vector

    cout << v1[0] << endl;  //accessing the values
    cout << v1.at(1) << endl; //accessing the second element

    // by iterator:- iterator points to the element like a pointer, that points to the memory block address, where the element is stored.
    // declaration :- ::iterator

    vector <int> ::iterator itr;
    //dereferencing: *
    // traversing: ++

    itr = v1.begin(); //storing element
    cout << *(itr) << endl; //dereference
    itr++; //traversing

    /* there are various functions in vector that are important
       1). begin() */

    // auto keyword example
    auto iterator = itr; //auto is a keyword, allows the compiler to automatically deduce the type of a variable based on its value.
    
    // Corrected type for pair<int, string>
    vector <pair<int, string>>::iterator itr2; 
    itr2 = v2.begin(); // Now iterating over v2, which is a vector of pairs

    // without auto
    vector <int> v6 = {1, 2, 3, 4, 5, 6};
    vector <int> ::iterator it1; //manually specify
    it1 = v6.begin();

    // with auto
    vector <int> vec = {1, 2, 3, 4, 5, 6, 7};
    auto it2 = vec.begin(); // automatically deduces the type for beginning iterator

    // You need to use a different variable name for the end iterator
    auto it_end = vec.end(); // stores the iterator to the end of the vector

    // reverse end(): rend();
    auto it_rev = vec.rend(); // reverse iterator points one past the first element in reverse

    // reverse beginning(): rbegin();
    auto it_beg = vec.rbegin(); // reverse iterator points to the last element

    // insert(): insert an element at the specified position
    auto in = vec.begin();
    vec.insert(in, 9); // insert 9 at beginning
    cout << "After insert: ";
    for (auto val : vec) {
        cout << val << " ";
    }
    cout << endl;

    // erase(): delete specific element
    auto er = vec.begin();
    vec.erase(er);
    cout << "After erase: ";
    for (auto val : vec) {
        cout << val << " ";
    }
    cout << endl;

    // pop_back(): delete last element
    vec.pop_back();
    cout << "After pop_back: ";
    for (auto val : vec) {
        cout << val << " ";
    }
    cout << endl;

    // front(): get first element
    cout << "Front element: " << vec.front() << endl;

    // back(): get last element
    cout << "Back element: " << vec.back() << endl;

    // clear(): delete all elements
    vec.clear();
    cout << "Size after clear: " << vec.size() << endl; // should print 0
    return 0;
}
