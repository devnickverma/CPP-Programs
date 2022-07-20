#include<iostream>
using namespace std;

int main()
{
    /* PATTERN
    AAAAA
    BBBBB
    CCCCC
    DDDDD
    EEEEE
    */

    cout << "Enter The character :" << endl;

    int n;
    cin >> n;

    int row = 1;
    while ( row <= n ) {

        int col = 1;

        while ( col <= n ) {
            char ch = 'A' + row - 1 ;
            cout << ch ;
            col = col + 1;
        }

        cout << endl;
        row = row+1;
    }
}
