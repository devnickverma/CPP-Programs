#include<iostream>
using namespace std;

int main()
{
    /* PATTERN
    E
    DE
    CDE
    BCDE
    ABCDE
    */

    cout << "Enter The character :" << endl;

    int n;
    cin >> n;

    int row = 1;
    while ( row <= n ) {

        int col = 1;
        char start = 'A' + n - row;
        while ( col <= row ) {
            cout << start ;
            start = start + 1;
            col = col + 1;
        }

        cout << endl;
        row = row+1;
    }
}
    
