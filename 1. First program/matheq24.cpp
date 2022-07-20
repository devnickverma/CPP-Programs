#include<iostream>
using namespace std;

int main()
{
    
    int n;
    int p;
    int counter = 1;
    int ans = 1;
    
    cin >> n;
    cin >> p;
    
    while (counter <= p){
          ans = ans * n;
          counter = counter + 1;
    }
    cout << ans << endl;
}
