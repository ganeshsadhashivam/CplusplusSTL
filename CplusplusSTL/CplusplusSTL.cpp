// C++STL.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include<bits/stdc++.h>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>

using namespace std;


void print() {
    cout << "Ganesh";
}


int sum(int a, int b) {
    return a + b;
}

//pair

void explainPair() {
    pair<int, int> p = { 1,3 };     // p = {1,3}

    cout << p.first << " " << p.second << endl;// 1     3

    pair<int, pair<int, int>> p1 = { 1,{3,5} };  // p = {1 ,{3,5}}

    cout << p1.first << " " << p1.second.second << " " << p1.second.first << endl;    //1   5  3

    pair<int, int>arr[] = { {1,2},{2,3},{5,1} }; // [{1,2},{2,3},{5,1}]

    cout << arr[1].second << endl;   // 3


}

// Vectors

void explainVector() {


    vector<int> v; // creates a empty container {}

    v.push_back(1);  // inserts 1 in vector v {1}
    v.emplace_back(2); // dynamically increases its size and push value 2 to the vector v {1,2}


    vector <pair<int, int>>vec; //data type declaration

    vec.push_back({ 1,2 }); // if you insert elements using push_back you have to insert like ({1,2})
    vec.emplace_back(5, 5); // if you use emplace_back and you insert values without curly braces (5,5) it automatically assumes to be a pair

    vector <int>vectorWithFilledValuesOfFive100{ 5,100 }; //creates container containing 5 instances of {100,100,100,100,100}



    vector <int>vectorWithFilledValuesOfFiveZerosOrGarbageValues(5); //this will create container with 5 filled values of 0 or garbage values based on the compiler


    vector <int> vectorWithFilledValuesOfFive20(5, 20);//creates a vector with five instances value of 20{20,20,20,20,20}

    //creates a new  vector With Filled Values Of Five 20 creates a copy 
    vector<int>vectorWithFilledValuesOfFive20Copy(vectorWithFilledValuesOfFive20);



    //to access elements from vectors


    vector <int> v2 = { 2, 5, 6, 7, 9, 4 };


    vector<int>::iterator it = v2.begin(); //it points to the memory address not the value
    it++;

    cout << *(it) << " " << "line 76" << endl; // 5 

    it = it + 2;
    cout << *(it) << " " << "line 78" << endl;

    // vector<int>::iterator it = v2.end(); // it point to the memory address not the value after the last  value 

    // vector<int>::iterator it = v2.rend(); // 2

    // vector<int>::iterator it = v2.rbegin(); // 4


     //accesing values as array
    cout << v2[0] << " " << v2.at(0);

    cout << v.back() << " " << "line 90" << endl; //element that at last


    for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++) {

        cout << *(it) << " ";

    }
    cout << endl;

    //using auto keyword it automatically identifies the data type

    for (auto it = v2.begin(); it != v2.end(); it++) {
        cout << *(it) << " ";
    }
    cout << endl;


    //using for loop



    for (auto it : v2) {
        cout << it << " ";
    }
    cout << endl;


    //erase  { 2, 5, 6, 7, 9, 4 }
    v2.erase(v2.begin() + 1); //5   output = { 2, 6, 7, 9, 4 }



    //erase  { 2, 5, 6, 7, 9, 4 }
    v2.erase(v2.begin() + 2, v2.begin() + 4);// 5,6 output=  { 2, 7, 9, 4 }



    //insert functions

    vector <int> v3(2, 100); //{100,100}
    for (auto it : v3) {
        cout << it << " ";
    }
    cout << endl;



    v3.insert(v3.begin(), 200); //{200,100,100}

    for (auto it : v3) {
        cout << it << " ";
    }
    cout << endl;


    //vector size
    cout << v3.size() << "line 147" << endl; //size of vector how many elements


    //begin+1 and , 2 represents that i want to insert and values
    v3.insert(v3.begin() + 1, 2, 10); //{200,10,10,100,100}

    for (auto it : v3) {
        cout << it << " ";
    }
    cout << endl;

    //copy vector

    vector <int>copy(2, 50); // {50,50}
    v3.insert(v3.begin(), copy.begin(), copy.end());//{50,50,200,10,10,100,100}


    for (auto it : v3) {
        cout << it << " ";
    }
    cout << endl;
    // vector size
    cout << v3.size() << "line 158" << endl; //size of vector how many elements

    v3.pop_back(); // pop out last element

    vector <int>v4(99, 100);

    cout << v4.size();

    vector <int>v5(999, 1000);

    //swap
    v4.swap(v5);


    cout << v4.size();

    //erases the entire vwctor
    v4.clear();


    cout << v4.empty();







}


void  explainList() {

    list<int> ls;
    ls.push_back(2);//{2}
    ls.emplace_back(4);  //{2,4}


    ls.push_front(5); //{5,2,4}

    ls.emplace_front(1); //{5,2,4}

    for (auto it = ls.begin(); it != ls.end(); ++it)
        cout << ' ' << *it;


    //functions are same as vector
    //begin,end,rbegin,rend,clear,insert,size,swap
}


void explainDeque() {

    deque<int>dq;
    dq.push_back(2);//{2}
    dq.emplace_back(4);  //{2,4}
    dq.push_front(5); //{5,2,4}
    dq.emplace_front(1); //{1,5,2,4}


    dq.pop_back(); // {1,5,2}
    dq.pop_front();//{{5,2}

    dq.back();
    dq.front();


    for (auto it = dq.begin(); it != dq.end(); ++it)
        cout << ' ' << *it;

    //functions are same as vector
    //begin,end,rbegin,rend,clear,insert,size,swap

}

void explainStack() {
    stack<int> st;
    st.push(1);//{1}
    st.push(2);//{1,2}
    st.push(3);//{1,2,3}
    st.push(4);//{1,2,3,4}
    st.emplace(5);//{1,2,3,4,5}

    cout << st.top() << "line 255" << endl; //prints 5

    st.pop(); // {1,2,3,4}  removes 5 from stack

    cout << st.top() << "line 259" << endl; //4

    cout << st.size() << "line 261" << endl;//4

    cout << st.empty() << "line 263" << endl; //false

    while (!st.empty()) {
        cout << ' ' << st.top();
        st.pop();
    }

    stack<int>st1, st2;
    st1.swap(st2);



}

void explainQueue() {

    queue<int>q;
    q.push(1);
    q.push(2);
    q.emplace(4);

    q.back() += 5;

    cout << q.back();


    cout << q.front();

    q.pop();

    cout << q.front();

}

void  explainpriorityQueue(){
    //maximum value priority queue (max HEAP)
    priority_queue<int>pq;

    pq.push(5); //{5}
    pq.push(2); //{2,5}
    pq.push(8);//{2,5,8}
    pq.emplace(10);//{2,5,8,10}

    cout << pq.top(); // 10
    
    //minimum value priority queue (min HEAP)
    priority_queue<int , vector<int>,greater<int>> pq1;
    pq1.push(5); //{5}
    pq1.push(2); //{2,5}
    pq1.push(8); //2,5,8}

    cout << pq1.top();


}
//stores everything in a sorted order and unique values
void explainSet() {

    set<int>st;
    st.insert(1);//{1}
    st.emplace(2);//{1,2}
    st.insert(2);//{1,2}
    st.insert(4);//{1,2,4}
    st.insert(3);//{1,2,3,4}


    for (auto it = st.begin(); it !=
        st.end(); ++it)
        cout << ' ' << *it;
    //functionality of insert in  vector
    // can be used also that only increases efficiency
  //begin,end,rbegin,rend,clear,insert,size,

    
    
    auto it = st.find(3); //it return address of that element

    cout << ' ' << &it << "line 342";
   
    auto itt = st.find(6); //it return set.end()
   
    cout << ' ' << &itt << "line 346";

    st.erase(4); //erases 4


    for (auto it = st.begin(); it !=
        st.end(); ++it)
        cout << ' ' << *it;
    cout << endl;
    int cnt = st.count(1); // if exists it will give 1 or 0 otherwise

    cout << cnt << "line357" << endl;
    auto ittt = st.find(3);
    st.erase(ittt);
    

   // {1,2,3}
    
    
    auto it1 = st.find(2);
    auto it2 = st.find(3);
    st.erase(it1,it2); // {1}
    
    for (auto it = st.begin(); it !=
        st.end(); ++it)
        cout << ' ' << *it;

    cout << endl;
    //lower_bound() and upper_bound() function works in the same way
    //as in vector it does

   
    
    st.insert(4);//{1,4}
    st.insert(2);//{1,2,4}
    st.insert(6);//{1,2,4}

    //lowerbound returns if the first occurence of the element occurs otherwise it returns
    // next imediate greater element than given
    auto it11 = st.lower_bound(3);


    //upperbound it never  returns the element that it points to it always returns next greater element than 4 
  
    auto it22 = st.upper_bound(4);
    
    for (auto it = st.begin(); it !=
        st.end(); ++it)
        cout << ' ' << *it ;
    cout << endl;
  
    cout << "lower bound " << *it11 << endl;

    cout << "upper bound " << *it22 << endl;
}

void explainMultiSet() {
    //same as set
    //but stores duplicates
    multiset<int>ms;
    ms.insert(1); //{1}
    ms.insert(1);//{1,1}
    ms.insert(1);//{1,1}


    for (auto itr=  ms.begin(); itr != ms.end(); ++itr) {
        cout << *itr << " ";
    }

    cout << endl;
    
    ms.erase(1); //all 1's are erased


    for (auto itr = ms.begin(); itr != ms.end(); ++itr) {
        cout << *itr << " "<<"line421";
    }
    cout << endl;

    ms.insert(1); //{1}
    ms.insert(1);//{1,1}
    ms.insert(1);//{1,1}
    int cnt = ms.count(1);

    //only a single one erased because it erases address
    ms.erase(ms.find(1));


    for (auto itr = ms.begin(); itr != ms.end(); ++itr) {
        cout << *itr << " "<<"line435";
    }
    cout << endl;

    ms.erase(ms.find(1), ms.find(1));

    for (auto itr = ms.begin(); itr != ms.end(); ++itr) {
        cout << *itr << " "<<"line442";
    }
    cout << endl;
    

}

//unique but not sorted
void  explainUnOrderedMultiSet() {
    //lower_bound and upper_bound functions does not works
    //rest all functions are same as above it does not stores in any
    //particular order it has a better complexity 
    //than set in most cases , except some when collision occurs
    unordered_set<int> ust;

   
    ust.insert(1); //{1}
    ust.insert(1);//{1,1}
    ust.insert(2);//{1,1}


    for (auto itr = ust.begin(); itr != ust.end(); ++itr) {
        cout << *itr << " ";
    }

    cout << endl;

    ust.erase(1); //all 1's are erased


    for (auto itr = ust.begin(); itr != ust.end(); ++itr) {
        cout << *itr << " " << "line421";
    }
    cout << endl;

    ust.insert(1); //{1}
    ust.insert(2);//{1,2}
    ust.insert(3);//{1,2,3}
    ust.insert(5); //{1}
    ust.insert(77);//{1,2}
    ust.insert(55);//{1,2,3}

    int cnt = ust.count(1);

    //only a single one erased because it erases address
    ust.erase(ust.find(1));


    for (auto itr = ust.begin(); itr != ust.end(); ++itr) {
        cout << *itr << " " << "line435 ";
    }
    cout << endl;

    ust.erase(ust.find(1), ust.find(1));

    for (auto itr = ust.begin(); itr != ust.end(); ++itr) {
        cout << *itr << " " << "line442 ";
    }
    cout << endl;

}


void explainMap() {

    map<int, int> mpp3;

    map<int, pair<int, int>>mpp2;

    map<pair <int, int>, int>mpp;

    mpp3[1] = 2;

    mpp3.insert({ 3,1 });

    mpp3.insert({ 2,4 });

    mpp[{2, 3}] = 10;

    
    for (auto itr : mpp3) {
        cout << itr.first << " " << itr.second << endl;
    }
    

    cout << mpp3[1] << endl; // 2

    cout << mpp3[5]<<endl; // 0 

    auto itt = mpp3.find(3);
   // cout << *(itt).second;
    for (auto itt : mpp3) {
        cout << itt.first << " " << itt.second << endl;
    }

    cout << endl;

    auto it = mpp3.find(5); //point to after the map
    cout << &it <<endl;

    auto itub = mpp3.lower_bound(2);
    
    auto itlb = mpp3.upper_bound(3);


    cout << "lower bound " << &itub << endl;

    cout << "upper bound " << &itlb << endl;


    //erase,swap,size empty ,are same as above




}

void explainMultiMap(){
    //you can store multiple keys duplicates key are allowed in a sorted way
    //{1,2}
    //{{1,3
    
    
   
    multimap<int, int> mp;

    // insert elements in random order 
    mp.insert({ 2, 30 });
    mp.insert({ 1, 40 });
    mp.insert({ 3, 60 });
    mp.insert({ 2, 20 });
    mp.insert({ 5, 50 });

    // prints the elements 
    cout << "KEY\tELEMENT\n";
    for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
        cout << itr->first
            << '\t' << itr->second << '\n';
    }
    
  
}

//duplicate keys are not  allowed 
//it is not in sorted order its in randomized order
void explainUnOrderedMap() {
    unordered_map<string, int> umap;

    // inserting values by using [] operator 
    umap["GeeksforGeeks"] = 10;
    umap["Practice"] = 20;
    umap["Contribute"] = 30;

    // Traversing an unordered map 
    for (auto x : umap)
        cout << x.first << " " <<
        x.second << endl;
}

//p1{}    p2{}
bool comp(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second < p2.second) return true;
    if (p1.second > p2.second) return false;
    //if they are same
    if (p1.first > p2.first) return true;
    return false;




}

//Algorithms
void explainExtra() {
    //sorting array
    int a[] = { 2,1,4,22,5,6,333,3 };
    sort(a, a + 8);
    for (int i = 0; i < (sizeof(a) / sizeof(int)); i++)
    cout << a[i] <<" ";
    cout << endl;


    cout << "Vector";
    //vector
    vector <int>v;
    v.push_back(55);
    v.emplace_back(2);
    v.emplace_back(1);
    v.push_back(0);



    sort(v.begin(), v.end());

    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }
    cout << endl;


    int a1[] = { 22,11,5,2,0,1 }; //{ 22,11,5,2,0,1 }
    sort(a1 + 1, a1 + 4); //{ 22 ,2 ,5, 11, 0 1} only specific position of arr will be sorted
    for (int i = 0; i < (sizeof(a1) / sizeof(int)); i++)
        cout << a1[i] << " ";
    cout << endl;

    //sort in descending order
    int arr[] = { 22,11,5,2,0,1 }; //{ 22,11,5,2,0,1 }
    sort(arr, arr + 6, greater<int>()); //{ 22 ,2 ,5, 11, 0 1} only specific position of arr will be sorted
    for (int i = 0; i < (sizeof(arr) / sizeof(int)); i++)
        cout << arr[i] << " ";
    cout << endl;



    //based on our sorting order
    pair<int, int> pa[] = { {1,2},{2,1},{4,1} };
   
    //sort it according to second element {2,1},{4,1},{1,2}
    //if second element is same , then sort //here second element is same 1 1 so
    //it according to first element but in descending order {4,1},{2,1}{1,2}

    //using custom comp srting order
    sort(pa, pa + 3, comp);
   
    for (auto iter : pa) {
        std::cout << "First: " << iter.first << ", Second: "
            << iter.second << std::endl;
    }

    //int n = 5;
    //cout << "Count of 1s in binary of " << n << " is " << __builtin_popcount(n);
   //int num = 7;
    //int cnt = __builtin_popcount(num);
   // int cnt = __builtin_popcount();
   // cout << cnt << endl;

   // long long num = 165786578687;
   // int cnt = __builtin_popcountll(num);


    string s = "123";
    do {

        cout << s << endl;

    } while (next_permutation(s.begin(), s.end()));

    int max[] = { 2,33,500,1,2000,5000 };
    int maxi = *max_element(max, max + 6);
    cout << maxi;

}

int main()
{
    /*

    print();
    int s = sum(5, 6);
    cout << s;

    return 0;

    std::cout << "Hello World!\n";
    */
     explainPair();
     explainVector();
     explainList();
     explainDeque();
     explainStack();
    explainQueue();
    explainpriorityQueue();
    explainSet();
    explainMultiSet();
    explainUnOrderedMultiSet();
    explainMap();
    explainMultiMap();
    explainUnOrderedMap();
    explainExtra();

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
