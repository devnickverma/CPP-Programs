#include<iostream>
using namespace std;

int main()
{
    /* PATTERN
          1
         22
        333
       4444
      55555
    */

    cout << "Enter The Number :" << endl;

    int n;
    cin >> n;
    int row = 1;
    while ( row <= n ) {
        // space print karlo
       int col = 1 , space = 1;
        while ( space <= n - row) {
            cout << " ";
            space = space + 1;// space++ is also can used
        }
        while ( col <= row ){
        cout << row ;
            col = col + 1;
         }
        cout << endl;
        row = row+1;
    }
}
    
