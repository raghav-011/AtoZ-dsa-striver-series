#include<iostream> //:- this line allows program to use standard input cin and outpur cout. without this, you would not be able to read from and write to the console.
using namespace std; //:- ensures that you don't need to prefix library function with std::
int main() //:- entry point of the program. when you run the program, it executes from here.
{
    cout << "The first lesson is about the fundamentals of language" << endl;

    return 0; //:- when the program finishes return 0 to the operating system. 0 signifies: program executed successfully.
}

/*
Identifiers:- used for fundamental identification purpose. a name in a program that is used as identification. 
it can be a class, function, variable and a label name.
label:- a symbolic name, used to mark a specific point in the code like l1,l2.
variable:- is an identifier, that is used to store the data and can be modified during the program. it allows to store, retrive and manipulate the data.
datatypes:- data types are the type of data that can be stored in a variable, determining the size of memory the variable will use and the operations that can be performed on it.
types of datatype generally used in cpp:- 

Type                 size(bytes)                 Range
char                      1                      -127 to 127 or 0 to 255
unsigned char             1                      0 to 255
signed   char             1                      -127 to 127
int                       4                      -2147483648 to 2147483647
unsigned int              4                      0 to 4294967295
signed int                4                      -2147483648 to 2147483647
short int                 2                      -32768 to 32767
unsigned short int        2                       0 to 65535
signed short int          2                      -32768 to 32767
long int                  8                      -9223372036854775808 to 9223372036854775807
signed long int           8                      -9223372036854775808 to 9223372036854775807
unsigned long int         8                      0 to 18446744073709551615
long long int             8                      -(2*63) to (2*63)-1
float                     4                      
double                    8
long double               12
wchar_t                   2 or 4

*/