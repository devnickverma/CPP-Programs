#include<iostream>
using namespace std;

int main()
{
    /* PATTERN
        *
       **
      ***
     ****
*    ****
    */

    cout << "Enter The character :" << endl;

    int n;
    cin >> n;

    int row = 1;
    while ( row <= n ) {
        // space print karlo
        int space = n - row;
        while ( space ) {
            cout << " ";
            space = space - 1;
        }
        int col = 1 ;
        while ( col <= row){
        cout << "*" ;
            
            col = col + 1;
         }
        cout << endl;
        row = row+1;
    }
}
    
