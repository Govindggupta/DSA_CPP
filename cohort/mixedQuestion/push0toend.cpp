#include <bits/stdc++.h>
using namespace std;

int main() {
    int t ; 
    cin >> t ; 

    while (t> 0 ) {
        int n ; 
        cin >> n ; 

        vector <int> array(n);
        for (int i = 0 ; i < n ; i++) {
            cin >> array[i] ; 
        }

        int count = 0 ; 
        int zeros = 0 ; 

        for (int i = 0; i < n; i++)
        {
            if (array[i] == 0) {
                zeros++;
            }
            else {
                array[count] = array[i];
                count++;
            }
        }

        while (count < n) {
            array[count] = 0;
            count++;
        }

        for (int i = 0; i < n; i++)
        {
            cout << array[i] << " " ;
        }


        cout << endl ;


        t--;
    }
    return 0;
}