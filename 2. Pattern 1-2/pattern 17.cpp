#include<iostream>
using namespace std;

int main()
{
    /* PATTERN
      11111
       2222
        333
         44
          5
    */

    cout << "Enter The character :" << endl;

    int n;
    cin >> n;
    int row = 1;
    while ( row <= n ) {
        // space print karlo
       int col = 1 , space = 1;
        while ( space < row) {
            cout << " ";
            space = space + 1;// space++ is also can used
        }
        while ( col <= n - row + 1 ){
        cout << row ;
            col = col + 1;
         }
        cout << endl;
        row = row+1;
    }
}
    
