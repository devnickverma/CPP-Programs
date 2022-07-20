#include<iostream>
using namespace std;

int main()
{
    /* PATTERN
          1
        2 3
      4 5 6
    7 8 9 10
    */

    cout << "Enter The Number :" << endl;

    int n;
    cin >> n;
    int row = 1, num = 1;
    while ( row <= n ) {
        // space print karlo
       int col = 1 , space = 1;
        while ( space <= n - row) {
            cout << "  ";
            space = space + 1;// space++ is also can used
        }
        while ( col <= row ){
            cout << num << " ";
            num = num + 1;
            col = col + 1;
         }
        cout << endl;
        row = row+1;
    }
}
    
