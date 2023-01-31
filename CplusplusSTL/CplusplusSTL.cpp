// C++STL.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
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

int main()
{
    /*

    print();
    int s = sum(5, 6);
    cout << s;

    return 0;

    std::cout << "Hello World!\n";
    */
    // explainPair();
     //explainVector();
    // explainList();
    // explainDeque();
    explainStack();

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
