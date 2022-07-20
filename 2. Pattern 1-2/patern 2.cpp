#include<iostream>
using namespace std;

int main()
{
  /* PATTERN
    11111
    22222
    33333
    44444
    55555
  */
    cout << "Enter The Number :" << endl;
    int n;
    cin >> n;
    
    int i = 1;
    
    while (i<=n){
    
     int j = 1;
     while (j<=n){
    cout << i ;
      j = j+1;
    }
    cout<<endl;
    i = i+1;
    }
}
