#include <bits/stdc++.h>
using namespace std;

int main() {
    int a ;
    cin >> a ; 
    int arr[a]; 
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i] ; 
    }

    int p = 0 , n = 0 , e = 0 , o = 0 ; 
    for (int i = 0; i < a; i++){
        if ( arr[i] > 0 ) {
            p++;
        } else if ( arr[i] < 0 ) {
            n++;
        }

        if ( arr[i] % 2 == 0 ) {
            e++;
        } else {
            o++;
        }
    }

    cout <<  p << endl;
    cout << n << endl;
    cout << e << endl;
    cout << o << endl;
    return 0;
}