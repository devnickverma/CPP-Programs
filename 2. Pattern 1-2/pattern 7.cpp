#include<iostream>
using namespace std;

int main()
{
    /* PATTERN
      1
      23
      345
      4567
      56789
    */

    cout << "Enter The Number :" << endl;

    int n;
    cin >> n;
    int row = 1;

    while (row<=n) {

        int col = 1;
        int value = row;
        
        while (col<=row) {
            cout << value ;
            value = value + 1;
            col = col + 1;
        }

        cout << endl;
        row = row+1;
    }
}
