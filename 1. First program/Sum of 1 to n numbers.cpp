#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "write a number"<< endl;
    cin >> n;

    int i;
    int sum = 0;

    while (i<=n) {

        sum = sum+i;
        i = i+1;

    }

    cout << "value of sum is :"<< sum ;

}
