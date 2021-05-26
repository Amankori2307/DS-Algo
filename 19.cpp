#include "bits/stdc++.h"
using namespace std;

void display(vector<int> v){
    for(auto el:v)
        cout<<el<<" ";
    cout<<endl;
}

int main(){
    vector<int> v;
    v.push_back(9);
    v.push_back(1); // Push element at end
    v.push_back(2);
    v.push_back(3);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;


    vector<int>::iterator it;
    for(it=v.begin(); it!=v.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    for(auto element:v){
        cout<<element<<" ";
    }
    cout<<endl;

    v.pop_back(); // pop element at back
    for(auto element:v){
        cout<<element<<" ";
    }
    cout<<endl;


    vector<int> v2(3, 50); //it means vector with three element whose value is 50
    for(auto el:v2)
        cout<<el<<" ";
    cout<<endl;

    swap(v, v2); // swap values of v and v2
    cout<<"V: \n";
    display(v);
    cout<<"V2: \n";
    display(v2);

    sort(v2.begin(), v2.end());
    display(v2);

    

    // +++++++++++++++++++++++++++++++++++++++
    // PAIR
    // +++++++++++++++++++++++++++++++++++++++
    pair<int, char> p;
    p.first = 4;
    p.second = 'a';

    cout<<p.first<<endl;
    return 0;
}