// STl ==> Standard template library
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// // -->Pairs
// // its is a kind of a datatype
// // it lys inside the utility library
void Pair()
{
    //     pair<int, int> p = {1,3};
    //     cout<< p.first << " " <<p.second <<endl ;

    //     pair<int, pair<int , int>> p2  = {1, {2,3}};
    //     cout<< p2.first << "," << p2.second.first << "," << p2.second.second <<endl ;

    //     pair<int,int> arr[] = {{1,2},{3,4},{5,6} };
    //     cout << arr[2].second <<endl ;
}

// -->Vector
// vector are generally like an array just with extra feature
// it is dynamic in nature i.e, you can change it further
#include <vector>
void Vector()
{
    // vector<int> v ;
    // v.push_back(1) ;
    // v.emplace_back(2);

    // vector<pair<int, int>> v2 ;
    // v2.push_back({1,2});
    // v2.emplace_back(4,5);
    // // in this Emplace is better than push bcoz its faster
    // // in push back you have to give data acc to datatype but in emplace you have to give in () and it will take accordingly

    // vector<int> v3(5, 10 ) ;
    // // it will create vectore with 5 intance of 10 i.e, {10 ,10 ,10 ,10 ,10} and further we can do changes in it and inc its size as well

    // vector<int> v4(v3) ;
    // // it will create new vector same as v3

    // // in vector to know length you have to use .size() instead of .length()
    // for (int i = 0; i < v2.size(); i++)
    // {
    //     cout << v2[i].first << " " ;
    // }

    // cout << "\n" ;

    // for (int i = 0; i < v4.size(); i++)
    // {
    //     cout<<v4[i] << " " ;

    // }

    //  vector<int> V = {1,2,3,4,4,5,6} ;
    //  V.emplace_back(20);
    // for (int i = 0; i < V.size(); i++)
    // {
    //     cout<<V[i] << " " ;
    // }
    // cout <<endl ;

    // //@. to print vectore
    // vector<int> :: iterator it = V.begin() ;
    // this itrator points a pointer at the 1st elemnt
    // it += 5;
    // cout<< *(it) << endl ;

    // vector<int> :: iterator it = V.end() ;
    // it points a pointer just after last elemnt and you have to it-- to access to element before it

    // for (vector<int>::iterator it = V.begin() ;  it != V.end(); it++)
    // {
    //     cout<< *(it) << " " ;
    // }

    // for (auto it = V.begin(); it != V.end(); it++)
    // {
    //     cout << *(it) << " " ;
    // }

    // // foreach
    // for (auto it : V) {
    //     cout << it <<endl ;
    // }

    // // @. to erase something
    // V.erase(//location of ement)
    // V.erase(V.begin() +2) ;
    // for (auto it : V) {
    //     cout << it << " " ; //1 2 4 4 5 6 20
    // }
    //
    // // @. to erase in a range
    // V.erase(V.begin() +2 , V.begin() +4) ;
    // for (auto it : V) {
    //     cout << it << " " ; //1 2 4 5 6 20 i.e, 2 and 3 ko nikala and 4 ko exclude kiya
    // }

    // // @. to insert something
    // V.insert(V.begin() , 300) ;  // 300 1 2 3 4 4 5 6 2
    // V.insert(V.begin()+1 ,  2,  300) ;  // 1 300 300 2 3 4 4 5 6 20
    //
    // // @.to copy a vector in a vector
    // vector<int> copy (2 , 100) ; // { 100 , 100}
    // V.insert(V.begin() + 2 , copy.begin() , copy.end()) ; // 1 2 100 100 3 4 4 5 6 20

    // VECTOR OPERATION SAMAPTI

    // for (auto it : v) {
    //     cout << it << " " ;
    // }
}

//--> LIST
// for insertion and deletion list is faster than vector
// for accessing array is fast
#include <list>
void List()
{
    list<int> ls = {2, 3, 4, 5, 6};
    for (auto it : ls)
    {
        cout << it << " ";
    }
    // almost same like vectore some more things than vectore
    // for more refer cplusplus.com
}

//--> DeQue
// it is almost same like list and vector
#include <deque>
void Deque()
{
    // deque<int> dq = {1,2,3,4};
    // dq.push_back(5);
    // dq.emplace_back(56);
    // dq.push_front(66);
    // // for more refer cplusplus.com
}

//-->Stack (lifo)
// main func are - push , pop , top
#include <stack>
void Stack()
{
    // stack<int> st ;
    // st.push(1);
    // st.push(2);
    // st.push(3) ;//{3,2,1}

    // cout << st.top() << endl ; // 3 i.e, last element

    // cout << st.size() << endl ; // 3
    // cout << st.empty() << endl ; // 0 or false i.e, it states either it is empty or not

    // cout << st.top() << endl ;

    // st.pop(); // {2,1} last in first out
}

//-->Que (fifo)
#include <queue>
void Que()
{
    // queue<int> q ;
    // q.push(1) ;
    // q.push(2) ;
    // q.push(3) ; // {1,2,3}

    // q.pop() ; // {2,3}
    // q.back() += 5 ; // 2,8

    // cout<< q.back( ) ; // 8
    // cout<< q.front( ) ; // 2

    // for more prefer cplusplus
}

//--PriorityQueue
// element with highest value stay at the top
void PQ()
{
    // priority_queue<int> pq ;
    // pq.push(5);
    // pq.push(2);
    // pq.push(6);
    // pq.push(8); // 8 , 6, 5 , 2

    // cout << pq.top() ; // 8

    // pq.pop() ; // 6,5,2

    // // // size swap empty function same as other

    // // Minimum heap
    // // to get lowest value in the top
    // priority_queue<int , vector<int , greater<int>> pq ;
    // pq.push(5);
    // pq.push(2);
    // pq.push(6);
    // pq.push(8); // 2 , 5 , 6 , 8

    // cout << pq.top() ; // 2
    // pq.pop() ; // 5 ,6 ,8
}

//-->Set
// unique value only
// value stored are sorted
void Set()
{
    // set<int> set;
    // set.insert(2) ;
    // set.emplace(3) ; // 2, 3
    // // push dosent work in this
    // set.emplace(1) ;  // 1 ,2 ,3
    // set.insert(1) ;  // 1 , 2, 3

    // // other things from up works same

    // // 1,2,3,4,5,6
    // auto it = set.find(3) ; // makes pointer over that number

    // auto it = set.find(6) ; // makes pointer after the last element

    // int cnt = set.count(1) ;// it will gove either 1 or 0 , here 1

    // set.erase(3); // 1 ,2 - it takes logirithmic time

    // auto it = set.find(3) ;
    // set.erase(3) ; // it takes constant time

    // // 1 ,2 ,4 ,5
    // auto it = set.find(2) ;
    // auto it2 = set.find(5) ;
    // set.erase(it ,it2) ;// 1 ,5 -- [it , it2)

    // // lower_bound( ) and upper_bound() works same sa vector
    // auto it = set.upper_bound(2);
    // auto it = set.lower_bound(3);
}

//-->MultiSet
// only sorted not unique
void MultiSet()
{
    // multiset<int> ms;
    // ms.insert(1) ;
    // ms.insert(1) ;
    // ms.insert(1) ;
    // ms.insert(1) ;
    // ms.insert(1) ; // 1 ,1 ,1 ,1 ,1

    // ms.erase(1) ; // erase all 1

    // ms.erase(ms.find(1)); // only one is deleted
    // ms.erase(ms.find(1), ms.find(1)+2); // deleted in a range

    // int ctn = ms.count(1) ;//5

    // // rest all thigs are same as set
}

//-->Unorered Set
// unique but not in order
// creates a random order
void unorderSet()
{
    // unordered_set<int> uset ;
    // //all fun works but lower and upper bound doesnt work
    // // time comp is O(1) in most cases
}

//-->MAP
// it store  unique key and value
// keep it sort with respwct to key
void Map()
{
    map<int, int> mpp;

    // map<int , pair<int , int>> mpp;
    // map<pair<int , int>,int > mpp;

    mpp[1] = 2; // it stores in {1,2} form
    mpp.emplace(3, 1);
    mpp.insert({2,3}) ; 

    for(auto it : mpp) {
        cout << it.first << " " << it.second <<endl ;
    }

    // IN STRING FROM 
    // map<string , int> marksMap ;
    // marksMap["name1"] = 64;
    // marksMap["name2"] = 83;
    // marksMap["name3"] = 34;
    // marksMap["name4"] = 59;

    // marksMap.insert({{"name5", 45}, {"name6", 17}});

    // // map<string, int> :: iterator iter;
    // // for (iter = marksMap.begin(); iter != marksMap.end(); iter++) {
    // //     cout << (*iter).first << " " << (*iter).second << endl;
    // // }

    // for (auto iter : marksMap) {
    //     cout << iter.first << " " << iter.second << endl;
    // }

    // cout << mpp[1];
    // auto it = mpp.find(3) ;
    // cout << *(it).first;

    auto it = mpp.find(5) ; // points in the end i.e, after last one

    // erase  , swap , size , empty and other fun are same 
}

//-->UnorderedMap 
void unordermap() {
    //diff in this and map is as same as set and unorder set difference 
}


int main()
{
    // Pair() ;
    // Vector();
    // List();
    // Deque();
    // Stack();
    // Que() ;
    // Set() ;
    // MultiSet();
    // Map();
    // unordermap();
    
    return 0;
}
