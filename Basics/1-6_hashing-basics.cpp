#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// 1--> Hashing
// hashing is prestoring and fetching
// eg: how many time number appear in an array (freq of an array element )
// without this if we use loop time complexity will be O(Q *N) where Q is total number whoes freq is asked and N is total length of array
// so by using hashing we can reduce time complexity annd space complexity

// So to solve this problem we make an array who stores the freq of the elements in the array and index of it is used as key

//  count frq of an array element
void freq() {
    int n ;
    cin >> n ;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i] ;
    }

    // precomputing
    int hash[13] ={0} ; // here 13 becoz we want to check 12 , so this value can vary as per the number whoes frequency you want 
    for (int i = 0; i < n; i++)
    {
        hash[array[i]]++ ;
    }

    int q ;
    cin>>q;
    while (q--)
    {
        int num ;
        cin >> num ;
        // fetching
        cout << hash[num] <<endl ;;
    }
    
}
// here, highest number in the frequency check list is 12, so we have assigned array[12 + 1].
// for int, you can declare maximum value in an array is 10^6 in main function and 10^7 in global declaration section.
// In boolean array, in main function you can declare upto 10^7 and globally you can declare upto 10^8.



// 2-->Character hashing
// eg. how many time a char appear in a string  

// counting frq of letter in the string
void charfreq() {
     string s ;
     cin >> s ;

    //  pre computing 
    int hash[256] = {0} ; // here 256 is the max value for char hashing beoz there are 256 and for capital and small alphabet it would 26 if asked 
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]]++ ; // here s[i] coz we took all 256 char but iff capital or small alphabet asked then s[i] - 'a' ) or (s[i] - 'A') concept will be used 
    }

    int q ;
    cin>> q ;
    while (q--)
    {
        char c ;
        cin >> c ;
        cout << hash[c] ;
    }
    
    
}




// 3--> Hashing ( map & unordered map) 

// now to to hash more than 10^7 we will be using map and unordered map 
// jab array bana rhe the tab 13 dena pad rha tha kyuki 12 check karna that , lekin map me jo value hai vo hi save hogi as key so space complexity reduced

// Map --> key is stored in sorted order 

// hashing using map  adn unorder 
void maphash() {
    int n ;
    cin >> n ;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cout << " enter" << i << " element:" ;
        cin >> array[i] ;
    }

    // pre compute 
    map<int , int> mpp ;
    for (int i = 0; i < n; i++)
    {
        mpp[array[i]]++ ;
    }

    unordered_map<int , int> unordermpp ;
    for (int i = 0; i < n; i++)
    {
        unordermpp[array[i]]++ ;
    }

    // to check order (info)
    for (auto it : mpp) {
        cout << it.first << "-->" << it.second <<endl ;
    }
    for (auto it : unordermpp) {
        cout << it.first << "-->" << it.second <<endl ;
    }
    

    int q ;
    cin >> q ;
    while (q--)
    {
        int num ;
        cin >> num ;
        // fetch
        cout << mpp[num] ;
        cout << unordermpp[num] <<endl ;
    }
    

}

// to do hashing in strings using map 
// you have to make map in this way : map<string , int> mpp ;



// TIME COMPLEXITY:
// for storing and fetching in map ---> worst, avg, best: O(log10n)
// for storing and fetching in unordered map ---> worst: O(n) rarest case, avg, best: O(1)
// so you should prefer using unordered map if time limit exided comes then only map 



// Finding highest/lowest frequency element
// 1 (number)
void minmaxfreq() {
    int n;
    cout << "Enter size of the array: ";
    cin >> n;
    int arr[n];
    unordered_map<int, int> mpp;

    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << " in the array" << endl;
        cin >> arr[i];

        mpp[arr[i]]++;
    }

    // Variables to store the highest and lowest frequency elements
    int maxFreq = INT_MIN, minFreq = INT_MAX; // include climits for this
    int maxFreqElement, minFreqElement;

    for (auto iter : mpp) {
        if(iter.second > maxFreq) {
            maxFreq = iter.second;
            maxFreqElement = iter.first;
        }
        if(iter.second < minFreq) {
            minFreq = iter.second;
            minFreqElement = iter.first;
        }
    }

    cout << "Highest frequency element is " << maxFreqElement << "(Frequency ---> " << maxFreq << ")" << endl;
    cout << "Lowest frequency element is " << minFreqElement << "(Frequency ---> " << minFreq << ")" << endl;

}

// 2 (character)
void charminmax() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    unordered_map<char, int> mpp;

    for (int i = 0; i < s.size(); i++) {
        mpp[s[i]]++;
    }

    // Variables to store the highest and lowest frequency elements
    int maxFreq = INT_MIN, minFreq = INT_MAX; // include climits for this
    int maxFreqElement, minFreqElement;

    for (auto iter : mpp) {
        if(iter.second > maxFreq) {
            maxFreq = iter.second;
            maxFreqElement = iter.first;
        }
        if(iter.second < minFreq) {
            minFreq = iter.second;
            minFreqElement = iter.first;
        }
    }

    cout << "Highest frequency element is " << char(maxFreqElement) << "(Frequency ---> " << maxFreq << ")" << endl;
    cout << "Lowest frequency element is " << char(minFreqElement) << "(Frequency ---> " << minFreq << ")" << endl;

}


int main()
{
    // freq();
    // charfreq() ;
    // maphash() ;
    // minmaxfrq();
    charminmax();

    return 0;
}