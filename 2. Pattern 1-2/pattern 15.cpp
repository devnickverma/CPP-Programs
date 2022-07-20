#include<iostream>
using namespace std;

int main()
{
    /* PATTERN
      *****
      ****
      ***
      **
      *
    */

    cout << "Enter The character :" << endl;

    int n;
    cin >> n;

    int row = 1;
    while ( row <= n ) {
        
        int col = 1 ;
        while ( col <= n - row + 1){
        cout << "*" ;
            
            col = col +1 ;
         }
        cout << endl;
        row = row+1;
    }
}
    
