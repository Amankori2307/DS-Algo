/*
    Set & Multiset | STL

    Set
        - Ordered Set
        - Unordered Set

    Ordered Set
        - Contains unique elements
        - Implemented using balanced BST
        - Elements are in sorted order
        - Random access is not possible, i.e you cannot get i'th elementin O(1)/O(Log N)
        - Present in #include<set> header file

    Multi Set
        - Can contain duplicates
        - Implemented using balanced BST
        - Elements are in sorted order
        - Random access is not possible, i.e. you can not get i'th element in O(n)/O(Log N)
        - Present in #include<set> header file

    Time Complexities For Ordered Set And Multiset
        - Insertion: O(Log N)
        - Deletion: O(Log N)
        - Upper/Lower bound O(Log N)


    Unordered Set
        - Contains unique elements
        - Implemented using hashing
        - Elements are not in sorted order
        - Random access is not possible
        - Present in #include<unordered_set>

        - TIME COMPLEXITIES
            - insertion O(1) in avg case, O(N) in worst case
            - Deletion O(1) in avg case, O(N) in worst case
            - Upper/Lower Bound - NA
*/


#include "bits/stdc++.h"
#include<set>
#include<unordered_set>
using namespace std;

void insertionAndPrintExample(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(4);
    s.insert(4);
    s.insert(4);
    s.insert(3);

    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    for(auto i = s.begin(); i!=s.end(); i++){
        cout<<*i<<" ";
    }
    cout<<endl;

    // Print in reverse order
    for(auto i=s.rbegin(); i!= s.rend(); i++){
        cout<<*i<<" ";
    }
    cout<<endl;

    // Size of SET
    cout<<"Size: "<<s.size()<<endl;



    // Custom comparator
    set<int, greater<int>> s2;
    s2.insert(9);
    s2.insert(9);
    s2.insert(20);
    s2.insert(30);
    
    for(auto i:s2){
        cout<<i<<" ";
    }
    cout<<endl;
}

void codeLowerOrUpperBound(){
    set<int> s;
    s.insert(1);
    s.insert(3);
    s.insert(5);

    cout << *s.lower_bound(2) << endl;
    cout << *s.upper_bound(3) << endl;
    cout << *s.lower_bound(3) << endl;        
    cout << (s.upper_bound(5) == s.end()) << endl;        
}


void eraseElementsFromSet(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(-12);

    s.erase(2);
    s.erase(s.begin());

    for(auto i:s){
        cout<<i<<" ";
    }
    cout << "\n" ;
}


void dispMultiSet(multiset<int> ms){
    for(auto i:ms){
        cout << i << " ";
    }
    cout << "\n";
}

void multisetExamples(){
    multiset<int> ms;
    ms.insert(7);
    ms.insert(9);
    ms.insert(8);
    ms.insert(2);
    ms.insert(6);
    ms.insert(1);
    ms.insert(4);
    ms.insert(1);
    ms.insert(7);
    ms.insert(1);

    dispMultiSet(ms);
    ms.erase(1); // Erases all occurances of 1
    dispMultiSet(ms);
    ms.erase(ms.find(7)); // Erases first occourances of 7
    dispMultiSet(ms);
}

void dispUnorderedSet(unordered_set<int> s){
    for(auto i:s){
        cout << i << " ";
    }
    cout << "\n";
}

void unsortedSetExamples(){
    unordered_set<int> s;
    s.insert(7);
    s.insert(9);
    s.insert(8);
    s.insert(2);
    s.insert(6);
    s.insert(1);
    s.insert(4);
    s.insert(1);
    s.insert(7);
    s.insert(1);

    dispUnorderedSet(s);
    // same methods as set can be used
}



int main(){
    insertionAndPrintExample();
    cout<<"\nUpper and Lower Bound Examples:\n";
    codeLowerOrUpperBound();

    cout<<"\n\nErase Elements From Set Examples:\n";
    eraseElementsFromSet();


    cout <<"\n+++++++++++++++++++++++++++++++++\n";
    cout <<"+++++++++++++++++++++++++++++++++\n";
    cout << "MULTISET EXAMPLES\n" ;
    multisetExamples(); 
    cout <<"+++++++++++++++++++++++++++++++++\n";

    cout <<"+++++++++++++++++++++++++++++++++\n";
    cout << "UNORDERED SET EXAMPLES\n" ;
    unsortedSetExamples(); 
    cout <<"+++++++++++++++++++++++++++++++++\n";
    cout <<"+++++++++++++++++++++++++++++++++\n";
    
    return 0;
}