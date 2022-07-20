#include<iostream>
using namespace std;

int main()
{
    /* PATTERN
          1
        1 2 1
      1 2 3 2 1
    1 2 3 4 3 2 1
  1 2 3 4 5 4 3 2 1
    */

    cout << "Enter The Number :" << endl;

    int n;
    cin >> n;
    int row = 1;
    while ( row <= n ) {
        // space print karlo
       int col = 1 , space = 1;
        while ( space <= n - row) {
            cout << "  ";
            space = space + 1;// space++ is also can used
        }
        while ( col <= row ){
            cout << col << " " ;
            col = col + 1;
         }
        col = row - 1;
        while ( col >= 1 ){
            cout << col << " " ;
            col = col - 1;
         }
        cout << endl;
        row = row+1;
    }
}
    
