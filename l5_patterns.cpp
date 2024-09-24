#include<iostream>
using namespace std;
int main()
{
//******************************************************************************************************
/* 1).
loop for make pattern like
1
23
456
78910
int i,j;
int n,v=1;
*/

/*cout<<"enter the number of lines you want to make pattern:"<<endl;
cin>>n;
while (i<=n)
{
j=1;
while (j<=i)
{
    cout<<v++;
    j++;
    
}
cout<<endl;
i++;
}
for (i = 1; i <= n; i++)
{
for (j = 1; j <=i; j++)
{
    cout<<v;
    v++;
}
cout<<endl;
}
*/

//******************************************************************************************************
/* 2).loop to make pattern like
*
**
***
****
*****
int i,j,n;
cout<<"enter the number of line to make pattern:"<<endl;
cin>>n;
for ( i = 1; i <= n; i++)
{
for ( j = 1; j <= i; j++)
{
    cout<<'*';
}
cout<<endl;
} */

//*******************************************************************************************************
//3).
/* loop to make pattern like
1
12
123
1234
12345
int n,i,j;
cout<<"enter the number of line to make pettern:"<<endl;
cin>>n;
for ( i = 1; i <= n; i++)
{
for ( j = 1; j <= i; j++)
{
    cout<<j;
}
cout<<endl;
} */

//*******************************************************************************************************
/* 4) loop to make pattern like
12345
12345
12345
12345
int i,j;
int n,v;
cout<<"enter the number of line to make pettern:"<<endl;
cin>>n;
for ( i = 1; i <= n; i++)
{
for ( j = 1; j <= n; j++)
{
    cout<<j;
}
cout<<endl;
}
*/

//**********************************************************************************************
/* 5) loop to make pattern like

54321
5432
543
54
5
int i,j,n;
cout<<"enter the number of lines to make pattern:"<<endl;
cin>>n;
for ( i = 1; i <=n; i++)
{
for ( j= n; j >=i; j--)
{
    cout<<j;
}
cout<<endl;
}
*/

//**********************************************************************************************
/*6) loop to make pattern like
12345
1234
123
12
1
int i,j,n;

cout<<"enter the number of line to make the pattern:"<<endl;
cin>>n;
for ( i = n; i >= 1; i--)
{
for ( j = 1; j <=i; j++)
{
    cout<<j;
}
cout<<endl;
}
*/

//**********************************************************************************************
/* 7)loop to make pattern like
****
****
****
****  means same row and same column
int i,j,n;
cout<<"enter the value of n:"<<endl;
cin>>n;
cout<<"the '*' pattern is given below"<<endl;
for(i=1;i<=n;i++)
{
for ( j = 1; j <=n; j++)
{
    cout<< "*";
}
cout<<endl;
}
*/

/* ******************************************************************************************
8).
loop to make pattern like
4444
4444
4444
4444 means jitni n ki value put kro utni row and same column  
int i,j,n;
cout<<"enter the value of n:"<<endl;
cin>>n;
cout<<"the pattern is given below"<<endl;
for(i=1;i<=n;i++)
{
for ( j = 1; j <=n; j++)
{
    cout<< n;
}
cout<<endl;
}
*/

/* ********************************************************************************************
9) loop to make pattern like
4321
4321
4321
4321  same row and column but value of n decreases 
int i,j,n;
cout<<"enter the value of n:"<<endl;
cin>>n;
cout<<"the pattern is given below"<<endl;
for(i=1;i<=n;i++)
{
for ( j = n; j >=1; j--)
{
    cout<< j;
}
cout<<endl;
}
*/

/* ********************************************************************************************
10) loop to make pattern like
1111
2222
3333
4444  same row and column
int i,j,n;
cout<<"enter the value of n:"<<endl;
cin>>n;
cout<<"the pattern is given below"<<endl;
for(i=1;i<=n;i++)
{
for ( j = 1; j <=n; j++)
{
    cout<< i;
}
cout<<endl;
}
*/

/* **********************************************************************************************
11) loop to make pattern like
1        // all first elements of all rows, define the row number, after that from 2nd row data shows 
212
3123
41234
512345
6
int n,i,j;
cout<<"enter the number of line to make pettern:"<<endl;
cin>>n;
for ( i = 1; i <= n; i++)
{
for ( j=1; j <= i; j++)
{
    cout<<j;
}
cout<<endl;
cout<<j++;
}
*/

/* *************************************************************************************************
12) loop to make pattern like
1
22
333
4444
55555
int n,i,j=1;
cout<<"enter the number of line to make pettern:"<<endl;
cin>>n;
for ( i = 1; i <= n; i++)
{
for ( j=1; j <= i; j++)
{
    cout<<i;
}
cout<<endl;
}
*/

/* ***************************************************************************************************
13) loop to make pattern like
11111
2222
333
44
5
int i,j,n;
cout<<"enter the number of line to make pattern:"<<endl;
cin>>n;
for ( i = 1; i <= n; i++)
{
for ( j = n; j>=i; j--)
    {
    cout<<i;
    }
    cout<<endl;
}
  */

/* *****************************************************************************************************
14) loop to make pattern like
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
int i,j,n;
cout<<"enter the number of line to make pattern:"<<endl;
cin>>n;
for ( i = 1; i <= n; i++)
{
for ( j = i; j>=1; j--)
    {
    cout<<j<<" ";
    }
    cout<<endl;
}
*/

/* ******************************************************************************************************
15) loop to make pattern like
1 2 3
4 5 6
7 8 9
int i,j,n;
int count=1;
cout<<"enter the number of line and column, you want to make pattern: "<<endl;
cin>>n;
for(i=1;i<=n;i++)
{
for ( j = 1; j <= n; j++)
{
    cout<<count<<" ";
    count++;
}
cout<<endl;
}
*/

/* ***********************************************************************************************************
16) loop to make a pattern like
1
2 3
3 4 5
4 5 6 7
int i=1,j,n;
cout<<"enter the number of lines, you want to make pattern :"<<endl;
cin>>n;
for ( i = 1; i <= n; i++)
{
int value=i;// yaha pr humne value, 1st loop ke andar define kiya hai,.... taki updation ke baad jo i ki value ho wahi is variable ki ho 
for ( j = 1; j <= i; j++)
{
    cout<<value<<" ";
    value++;
}
cout<<endl;
}
*/

/* ***************************************************************************************************
17) make a pattern like
 1 2 3
 2 3 4
 3 4 5
int i,j,n;
cout<<"enter the number of rows, you want to make pattern :"<<endl;
cin>>n;
for ( i = 1; i <= n; i++)
{
int count=i;
for ( j = 1; j <= n; j++)
{
    cout<<count<<" ";
    count++;
}
cout<<endl;
}
*/

/* **************************************************************************************************************  
characters patterns starting
18).
make a pattern like
A A A
B B B
C C C
int i,j,n;
cout<<"enter the number of lines, you want to make pattern :"<<endl;
cin>>n;
for ( i = 1; i <= n; i++)
{
for ( j = 1; j <= n; j++)
{
    char ch='A'+i-1;
    cout<<ch<<" ";
    
}
cout<<endl;
}
*/

/* ******************************************************************************************************************
19
make a pattern like
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
int i,j,n,b,v;
cout<<"enter the number of rows, you want to make pattern: "<<endl;
cin>>n;
for ( i = 1; i <= n; i++)
{
for ( b = n-i; b >= 0; b--)
{
    cout<<" ";
}
for ( j = 1; j <= i; j++)
{
    char ch='A'+j-1;
    cout<<ch;
    
}
for ( v = i-1; v >= 1; v--)
{
    char ch ='A'+v-1;
    cout<<ch;
}
cout<<endl;
}
cout<<"thank you, have a nice day"<<endl;
*/

/* **************************************************************************************************************
20) make a pattern like
A
A B
A B C
A B C D
A B C D E
int i,j,n;
cout<<"enter the number of lines, you want to make pattern: "<<endl;
cin>>n;
for ( i = 1; i <= n; i++)
{
for ( j = 1; j <= i; j++)
{
    char ch= 'A'+j-1;
    cout<<ch<<" ";
}
cout<<endl;
}
*/

/* ***********************************************************************************************
20) make a pattern like
A
A A
A A A 
A A A A
A A A A A
int rows,col,num;
cout<<"enter the number of rows, you want to make pattern: "<<endl;
cin>>num;
for ( rows = 1; rows <= num; rows++)
{
for ( col = 1; col <= rows; col++)
{
    char ch='A';
    cout<<ch<<" ";
}
cout<<endl;
}
*/

/* ***********************************************************************************************
21) make a pattern like
A B C
A B C
A B C
int i,j,n;
cout<<"enter the number of rows, you want to make pattern : "<<endl;
cin>>n;
for ( i = 1; i <= n; i++)
{
for ( j = 1; j <= n; j++)
{
    char ch ='A'+j-1;
    cout << ch<<" ";
}
cout<<endl;
}
*/
//**************************************************************************************************
//22).
//make a pattern like
// A B C
// D E F
// G H I
//  int i,j,n;
//  char ch ='A';
//  cout<<"enter the number of rows, you want to nake pattern :"<<endl;
//  cin>>n;
//  for ( i = 1; i <= n; i++)
//  {
//   for ( j = 1; j <= n; j++)
//   {
//     cout<<ch<<" ";
//     ch=ch+1;
//   }
//   cout<<endl;
//  }

//*********************************************************************************************************
//23).
//make a pattern like
// A B C 
// B C D
// C D E
// int i,j,n;
// cout<<"enter the number of rows, you want to make pattern :"<<endl;
// cin>>n;
// for ( i = 1; i <= n; i++)
// {
//   char ch='A'+i-1;
//   for ( j = 1; j <= n; j++)
//   {
//     cout<<ch<<" ";
//     ch++;
//   }
//   cout<<endl;
// }

//*******************************************************************************************************
//24).
//make a pattern like
// A
// B B
// C C C 
// int i,j,n;
// cout<<"enter the number of rows, you want to make pattern :"<<endl;
// cin>>n;
// for ( i = 1; i <= n; i++)
// {
//   for ( j = 1; j <= i; j++)
//   {
//     char ch='A'+i-1;
//     cout<<ch<<" ";
//   }
//   cout<<endl;
// }

//************************************************************************************************************
//25).
//make a pattern like
// A
// B C
// D E F
// int i,j,n;
// char ch ='A';
// cout<<"enter the number of rows, you want to make pattern :"<<endl;
// cin>>n;
// for ( i = 1; i <= n; i++)
// {
  
//   for ( j = 1; j <= i; j++)
//   {
    
//     cout<<ch<<" ";
//     ch++;
//   }
//   cout<<endl;
// }

//****************************************************************************************************
//26).
//make a pattern like
// A
// B C
// C D E 
// D E F G 
// int i,j,n;
// cout<<"enter the number of rows, you want to make pattern :"<<endl;
// cin>>n;
// for ( i = 1; i <=n; i++)
// {
//   char ch='A'+i-1;
//   for ( j = 18; j <= i; j++)
//   {
//     cout<<ch<<" ";
//     ch++;

//   }
//   cout<<endl;
// }

//******************************************************************************************************
//27).
// make a pattern like
// D
// D C
// D C B 
// D C B A 
// int i,j,n;
// cout<<"enter the number of rows, you want to make pattern :"<<endl;
// cin>>n;
// for ( i = 1; i <= n; i++)
// {
//   char ch='A'+n-1;
//   for ( j = 1; j <= i; j++)
//   {
//   cout<<ch<<" ";
//   ch--;  
//   }
//   cout<<endl;
// }

//******************************************************************************************************
//28).
//make a pattern like
// D
// C D
// B C D 
// A B C D
// int i,j,n;
// cout<<"enter the number of rows, you want to make pattern : "<<endl;
// cin>>n;
// for ( i = 1; i <=n; i++)
// {
//   char ch='A'+n-i;
//   for ( j = 1; j <= i; j++)
//   {
//     cout<<ch<<" ";
//     ch++;
//   }
//   cout<<endl;
// }

//******************************************************************************************************
//29).
// make a pattern like
//    *
//   **
//  ***
// ****
//*****
// int i,j,n,b;
// cout<<"enter the number of rowa, you want to make pattern :"<<endl;
// cin>>n;
// for ( i = 1; i <= n; i++)
// {
//   for ( b = n-i; b >= 0; b--)
//   {
//     cout<<" ";
//   }
//   for ( j = 1; j <= i; j++)
//   {
//     cout<<'*';
//   }
//   cout<<endl;
// }

//*******************************************************************************************************
//30).
//make a pattern like
//*****
//****
//***
//**
//*
// int i,j,n;
// cout<<"enter the number of rows, you want to make pattern :"<<endl;
// cin>>n;
// for ( i = 1; i <= n; i++)
// {
// for ( j = n; j >=i; j--)
// {
//   cout<<'*';
// }
// cout<<endl;
// }

//*********************************************************************************************************
//31).
//make a pattern like
// *****
//  ****
//   ***
//    **
//     *
// int i,j,n,b;
// cout<<"enter the number of rows, you want to make pattern :"<<endl;
// cin>>n;
// for ( i = 1; i <= n; i++)
// {
//   for ( b = 0; b < i; b++)
//   {
//     cout<<" ";
//   }
//   for ( j = n; j >=i; j--)
//   {
//     cout<<'*';
//   }
//   cout<<endl;
// }

//**********************************************************************************************************
//32).
//make a pattern like
// 1 1 1 1 
//   2 2 2
//     3 3 
//       4 
// int i,j,n,b;
// cout<<"enter the number of rows, you want to make pattern :"<<endl;
// cin>>n;
// for ( i = 1; i <= n; i++)
// {
//   for ( b = 0; b < i; b++)
//   {
//     cout<<" ";
//   }
//   for ( j = n; j >= i; j--)
//   {
//     cout<<i<<" ";
//   }
//   cout<<endl;
// }

//*******************************************************************************************************
//33).
//make a pattern like
//      1
//     22
//    333
//   4444 
// int i,j,n,b;
// cout<<"enter the number of rows, you want to make pattern :"<<endl;
// cin>>n;
// for ( i = 1; i <= n; i++)
// {
//   for ( b = n-i; b >0; b--)
//   {
//     cout<<" ";
//   }
//   for ( j = 1; j <= i; j++)
//   {
//     cout<<i;
//   }
//   cout<<endl;
// }

//*********************************************************************************************************
//34).
// make a pattern like
//     1
//    12
//   123
//  1234
// 12345
// int i,j,n,b;
// cout<<"enter the number of rows and columns, you want to make  pattern :"<<endl;
// cin>>n;
// for ( i = 1; i <= n; i++)
// {
//   for ( b = n-i; b > 0; b--)
//   {
//     cout<<" ";
//   }
//   for ( j = 1; j <= i; j++)
//   {
//     cout<<j;
//   }
//   cout<<endl;
// }

//******************************************************************************************************
//35).
//make a pattern like
//     1
//    121
//   12321
//  1234321
// 123454321
// int i,j,n,b,v;
// cout<<"enter the number of rows and columns, you want to make pattern:"<<endl;
// cin>>n;
// for ( i = 1; i <= n; i++)
// {
//   for ( b = 1; b <= n-i; b++)
//   {
//     cout<<" ";
//   }
//   for ( j = 1; j <= i; j++)
//   {
//     cout<<j;
//   }
//   for ( v = i-1; v >= 1; v--)
//   {
//     cout<<v;
//   }
//   cout<<endl;
// }

//*****************************************************************************************************
//36). 
// make a pattern like
//     1
//    2 2
//   3 3 3 
//  4 4 4 4 
// 5 5 5 5 5 
// int i,j,n,b;
// cout<<"enter the number of rows and columns, you want to make pattern :"<<endl;
// cin>>n;
// for ( i = 1; i <= n; i++)
// {
//   for ( b = 1; b <= n-i; b++)
//   {
//     cout<<" ";
//   }
//   for ( j = 1; j <= i; j++)
//   {
//     cout<<i<<" ";
//   }
//   cout<<endl;
// }

//**********************************************************************************************************
//37).
//make a pattern like 
//     1
//    1 2 
//   1 2 3 
//  1 2 3 4
// 1 2 3 4 5
// int i,j,b,n;
// cout<<"enter the number of rows and columns, you want to make pattern:"<<endl;
// cin>>n;
// for ( i = 1; i <= n; i++)
// {
//   for ( b = 1; b <= n-i; b++)
//   {
//     cout<<" ";
//   }
//   for ( j = 1; j <= i; j++)
//   {
//     cout<<j<<" ";
//   }
//   cout<<endl;
// }
  
//*********************************************************************************************************
//38).
//make a pattern 
// 1234
//  234
//   34
//    4
// int i,j,n,b;
// cout<<"enter the number of rows and columns, you want to make pattern : "<<endl;
// cin>>n;
// for ( i = 1; i <=n; i++)
// {
//   for ( b = 0; b < i; b++)
//   {
//     cout<<" ";
//   }
//   for ( j = 1; j <= i; j++)
//   {
//     cout<<i;
//   }
//   cout<<endl;
// }

//*****************************************************************************************************
//39).
//make a pattern like
//    11
//   1221
//  123321
// 12344321
// int i,j,b,v,n;
// cout<<"enter the number of rows and columns, you want to make pattern :"<<endl;
// cin>>n;
// for ( i = 1; i <= n; i++)
// {
//   for ( b = n-i; b > 0; b--)
//   {
//     cout<<" ";
//   }
//   for ( j = 1; j <= i; j++)
//   {
//     cout<<j;
//   }
//   for ( v = i; v >=1; v--)
//   {
//     cout<<v;
//   }
//   cout<<endl;
// }

//**********************************************************************************************************
//40).
//make a pattern like
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
// 1 5 10 10 5 1
// int i,j,n;
// cout<<"enter the number of rows and columns, you want to make pattern :"<<endl;
// cin>>n;
// for ( i = 1; i <= n; i++)
// {
//   int val=1;
//   for ( j = 1; j <= i; j++)
//   {
//     cout<<val<<" ";
//     val=val*(i-j)/j;
//   }
//   cout<<endl;
// }

//********************************************************************************************************
//41).
//make a pattern like
//       1
//      23
//     456
//    78910 
// int i,j,n,v=1,b;
// cout<<"enter the number of rows and columns, you want to make pattern : "<<endl;
// cin>>n;
// for ( i = 1; i <= n; i++)
// {
//   for ( b = n-i; b > 0; b--)
//   {
//     cout<<" ";
//   }
//   for ( j = 1; j <= i; j++)
//   {
//     cout<<v;
//     v++;
//   }
//   cout<<endl;
// }

//***********************************************************************************************************
// 42).
// make a pattern like
//    1
//   2 3
//  4 5 6 
// 7 8 9 10
int i,j,b,n,v=1;
cout<<"enter the number of rows and columns, you want to make pattern :"<<endl;
cin>>n;
for ( i = 1; i <= n; i++)
{
  for ( b = n-i; b > 0; b--)
  {
    cout<<" ";
  }
  for ( j = 1; j <= i; j++)
  {
    cout<<'*'<<" ";
    v++;
  }
  cout<<endl;
}

//**************************************************************************************************************
//43).
//make a pattern like
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
// int i,j,b,n,v;
// cout<<"enter the number of rows, you want to make pattern : "<<endl;
// cin>>n;
// for ( i = n; i >= 1; i--)
// {
//  for ( j = 1; j <= i; j++)
//  {
//   cout<<j;
//  }
//   for ( b = 0; b < 2*(n-i); b++)
//   { 
//     cout<<'*';                      // yaha b ko 2 baar alag alag likhne se acha, condition me b<2*(n-i) kr do 
//   }                                    // same hi baat hai, aise bhi kr skste hai
//  for(b=0; b<n-i; b++)
//  {
//   cout<<'*';
//  }
// for ( v = i; v >= 1; v--)
// {
//   cout<<v;
// }
// cout<<endl;
 
// }

//**************************************************************************************************************
//44).
//make a pattern like
//54321
// 4321
//  321
//   21
//    1
// int i,j,b,n;
// cout<<"enter the number of rows, you want to make pattern:"<<endl;
// cin>>n;
// for ( i = n; i >= 1; i--)
// {
//  for ( b = 0; b <n-i ; b++)
//  {
//   cout<<" ";
//  }
//  for ( j = i; j >= 1; j--)
//  {
//   cout<<j;
//  }
//  cout<<endl;
// }

//************************************************************************************************************
//45).
//make a pattern like
//     **
//    ****
//   ******
//  ********
// **********
// int i,j,b,n;
// cout<<"enter the number of rows, you want to make pattern :"<<endl;
// cin>>n;
// for ( i = n; i >=1 ; i--)
// {
//   for ( b = 1; b <= i; b++)
//   {
//   cout<<" ";
//   }
 
//   for ( j = 1; j <= 2*(n-i+1); j++)
//   {
//     cout<<'*';
//   }
//   cout<<endl;
 
 
// }

//***************************************************************************************************************
//46).
//make a pattern like
// **********
//  ********
//   ******
//    ****
//     **
// int i,j,n,b;
// cout<<"enter the number of rows, you want to make pattern :"<<endl;
// cin>>n;
// for ( i = 0; i <= n; i++)
// {
//   for ( b = 0; b < i; b++)
//   {
//     cout<<" ";
//   }
//   for ( j = 1; j <= (2*n-2*i); j++)
//   {
//     cout<<'*';
//   }
//   cout<<endl;
// }

//**************************************************************************************************************
//47).
//make a pattern like
//    **
//   ****
//  ******
// ********
//  ******
//   ****
//    **

//*************************************************************************************************************
//48).
//make a pattern like
//1
//12
//121
//1212
//12121
// int i,j,n;
// cout<<"Enter the number of rows and columns, you want to make pattern :"<<endl;
// cin>>n;
// for ( i = 1; i <= n; i++)
// {
//   for ( j = 1; j <=i; j++)
//   {
//     if (j%2==0)
//     {
//       cout<<"2";
//     }
//     else
//     {
//       cout<<"1";
//     }
//   }
//   cout<<endl;
// }

//*****************************************************************************************************************
//49).
//make a pattern like
//*****
//*   *
//*   *
//*   *
//*****
// int i,j,n;
//  cout<<"enter the number of rows and columns, you want to make pattern: "<<endl;
//  cin>>n;
// for ( i = 1; i <= n; i++)
// {
//   for ( j = 1; j <=n; j++)
//   {
//     if (i>=2 && i<=n-1)
//     {
//       if (j>=2 && j<=n-1)
//       {
//         cout<<" ";
//       }
//       else
//       cout<<'*';
//     }
//     else
//     cout<<'*';
//   }
//   cout<<endl;
// }

//*************************************************************************************************************************
//50).
//make a pattern like
//0
//0
//0
//0
//01
// int i,j,n;
// cout<<"enter the number of rows, you want to make pattern: "<<endl;
// cin>>n;
// for ( i = 1; i <= n; i++)
// {
//   for ( j = 1; j<2; j++)
//   {
//     cout<<0;
//     if(i==n)
//     {
//       cout<<j;
//     }
//   }
//   cout<<endl;
// }

//****************************************************************************************************************
//51).
//make a pattern like
//1
//10
//101
//1011
//0111
// int i,j;
// for ( i = 1; i <= 5; i++)
// {
//   for ( j = 1; j <= i; j++)
//   {
    
//     if (i<=4)
//     {
//       if (j==2)
//       {
//         cout<<0;
//       }
//       else 
//       {
//         cout<<1;
//       }
//     }
//     else if (i==5)
//     {
//       if (j==1)
//       {
//         cout<<0;
//       }
//       else if (j==5)
//       {
//         j<i;
//       }
//       else 
//       {
//         cout<<1;
//       }
//     } 
//   }
//   cout<<endl;
// }


//*********************************************************************************************************************
//52).
//make a pattern like
//    A
//   BCD
//  EFGHI
// JKLMNOP
//QRSTUVWXY
// int i,j,b,v,n=5;
// for ( i = 1; i <= n; i++)
// {
//   for ( b = n-1; b >= 0; b--)
//   {
//     cout<<" ";
//   }
//   for ( j = 1; j <= n; j++)
//   {
//     char ch='A'
//     cout<<ch;
//   }
//   for ( v = 1; v < i; v++)
//   {
//     char ch='A'+3*v;
//     cout<<ch;
//   }
//   cout<<endl;
// }
return 0;
}