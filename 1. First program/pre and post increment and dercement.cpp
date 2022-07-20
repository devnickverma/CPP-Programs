#include<iostream>
using namespace std;

int main()
{
   int i = 5;
    
   cout << (++i) << endl;//pre increment
    // 6 , i = 6
   cout << (i++) << endl;//post increment
    // 6 , i = 7 
   cout << (--i) << endl;//pre decrement
    // 6 , i = 6
   cout << (i--) << endl;//post decrement
    // 6 , i = 5
}
