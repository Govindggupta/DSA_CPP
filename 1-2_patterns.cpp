#include<iostream>
using namespace std;

int main() {
    // int a ;
    // cout<< "enter a number : " ;
    // cin>>a ;

    // for ideal cas let us assume a = 5 every where 
    int a = 5 ;



    // 1.:
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cout<<"*";
        }
        cout <<endl ;
    }
    // output : 
    // *****
    // *****
    // *****
    // *****
    // *****
    

    // 2. 
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<"*";
        }
        cout <<endl ;
    }
    // output : 
    // *
    // **
    // ***
    // ****
    // ***** 



    // 3.
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<j+1 ;
        }
        cout <<endl ;
    }
    // output:
    // 1
    // 12
    // 123
    // 1234
    // 12345


    // 4.
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<i+1 ;
        }
        cout <<endl ;
    }
    // output: 
    // 1
    // 22
    // 333
    // 4444
    // 55555


    // 5. 
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a-i; j++)
        {
            cout<<"*";
        }
        cout <<endl ;
    }
    // output:
    // *****
    // ****
    // ***
    // **
    // *


    // 6.
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a-i; j++)
        {
            cout<<j+1;
        }
        cout <<endl ;
    }
    // output:
    // 12345
    // 1234
    // 123
    // 12
    // 1


    // 7.
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a-i-1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i+1; j++)
        {
            cout<< "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout<< "*";
        }
    // ye bhi ek approach hai 
        cout<< endl;
    }
    // output : 
    //      *
    //     ***
    //    *****
    //   *******
    //  *********



    // 8.  
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2*a-i*2 -1; j++)
        {
            cout<< "*";
        }
        // yaha pe jo dusra tha uska iske dath add kiya to ye equation bani i.e, ye bhi ek approach hai 
        // and alag alag 2 bar print karo ye bhi ek approach hai 
        cout<< endl;
    }
    // output : 
    // *********
    //  *******
    //   *****
    //    ***
    //     *


    
    // 9.
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a-i-1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i+1; j++)
        {
            cout<< "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout<< "*";
        }
        cout<< endl;
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < a-i; j++)
        {
            cout<< "*";
        }
        for (int j = 0; j < a-i-1; j++)
        {
            cout<< "*";
        }
        cout<< endl;
    }
    // output :
    //     *
    //    ***
    //   *****
    //  *******
    // *********
    // *********
    //  *******
    //   *****
    //    ***
    //     *

    

    // 10.
    for (int i = 0; i < a; i++)
    {
        for ( int j = 0; j < i+1; j++)
        {
            cout<<"*";
        }
        cout <<endl ;  
    }
    for (int i = 0; i < a; i++)
    {
        for ( int j = 0; j < a-i-1; j++)
        {
            cout<<"*";
        }
        cout <<endl ;  
    }
    // output : 
    // *
    // **
    // ***
    // ****
    // *****
    // ****
    // ***
    // **
    // *
    


    // 11. 
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            if ((i+j)%2==0) // jaha pe bhi i and j ka sum even hai vaha 1
            {
                cout<<1;
            }
            else{
                cout<<0;
            }
            
        }
        cout <<endl ;
    }
    // output : 
    // 1
    // 01
    // 101
    // 0101
    // 10101
    
    

    // here we want a = 4 so we took a-1
    // 12.
    for (int i = 0; i < a-1; i++)
    {
        for (int j = 0; j <i+1 ; j++)
        {
            cout<< j+1 ;
        }
        for (int j = 0; j < 2*a-2*i-2; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j <i+1 ; j++)
        {
            cout<< i-j+1 ;
        }
        cout <<endl ;
    }
    //output :       
    // 1      1
    // 12    21
    // 123  321
    // 12344321



    // 13.
    int num = 1 ; 
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<num << " ";
            num++; 
        }
        cout <<endl ;
    }
    // output :
    // 1 
    // 2 3
    // 4 5 6
    // 7 8 9 10
    // 11 12 13 14 15



    // 14.
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<char('A'+j);
        }
        cout <<endl ;
    }
    // output : 
    // A   
    // AB
    // ABC
    // ABCD
    // ABCDE



    // 15.
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a-i; j++)
        {
            cout<<char('A'+j);
        }
        cout <<endl ;
    } 
    // output : 
    // ABCDE
    // ABCD
    // ABC
    // AB
    // A
    



    // 16. 
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<char('A'+i);
        }
        cout <<endl ;
    }
    // output :
    // A
    // BB
    // CCC
    // DDDD
    // EEEEE



    // 17. 
    // here we want a = 4 so a-1
    for (int i = 0; i < a-1; i++)
    {
        for (int j = 0; j < a-i-2; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j < i+1; j++)
        {
            cout<<char('A'+j);
        }
        for (int j = 0; j < i; j++)
        {
            cout<<char('A'+j);
        }
        cout <<endl ;
    }
    // output : 
    //    A
    //   ABA
    //  ABCAB
    // ABCDABC



    // 18. 
    char starting = 'E';
    for (int i = 0; i < a; i++)
    {
        for (int j = i; j >= 0 ; j--)
        {
            cout<<char(starting - j);
        }
        cout <<endl ;
    }
    // output : 
    // E
    // DE
    // CDE
    // BCDE
    // ABCDE

    

    // 19. 
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a-i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < 2*i; j++)
        {
            cout<< " ";
        }
        for (int j = 0; j < a-i; j++)
        {
            cout<< "*";
        }
        cout<< endl;
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < 2*a - 2*i - 2; j++)
        {
            cout<< " " ;     
        }
        for (int j = 0; j < i+1; j++)
        {
            cout<<"*";
        }
        cout <<endl ;
    }
    // output : 
    // **********
    // ****  ****
    // ***    ***
    // **      **
    // *        *
    // *        *
    // **      **
    // ***    ***
    // ****  ****
    // **********
    


    // 20.
    for (int i = 0; i < a-1; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < 2*a - 2*i - 2; j++)
        {
            cout<< " " ;     
        }
        for (int j = 0; j < i+1; j++)
        {
            cout<<"*";
        }
        cout <<endl ;
    } 
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a-i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < 2*i; j++)
        {
            cout<< " ";
        }
        for (int j = 0; j < a-i; j++)
        {
            cout<< "*";
        }
        cout<< endl;
    }
    // output : 
    // *        *
    // **      **
    // ***    ***
    // ****  ****
    // **********
    // ****  ****
    // ***    ***
    // **      **
    // *        *



    // 21.
    for (int i = 0; i <= a; i++)
    {
        for (int j = 0; j <= a; j++)
        {
            if (i == 0 || i == a || j==0 || j==a )
            {
                cout<< "*"; 
            }
            else{
                cout<< " ";
            }
        }
        cout <<endl ;
        
    }
    // output : 
    // ******
    // *    *
    // *    *
    // *    *
    // *    *
    // ******
    


    // 22.
    int n = a-1 ;// take input as 4 we do a-1
    for (int i = 0; i < 2*n-1 ; i++)
    {
        for (int j = 0; j < 2*n-1; j++)
        {
            int Top = i;
            int left = j ;
            int right = 2*n - 2 - j ;
            int down = 2*n - 2 -i ;
            cout << (n - min(min(Top , down) , min(right, left)));
        }
        cout <<endl ;
    }
    output :
    // 4444444
    // 4333334
    // 4322234
    // 4321234
    // 4322234
    // 4333334
    // 4444444

    return 0;
}