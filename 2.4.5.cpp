#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    // Program to add only positive number
    int num, sum=0;
    cin>>num;

    while(num >= 0){
        cout<<num<<endl; 
        sum += num;
        cin>>num;
    }
    cout<<"Sum: "<<sum<<endl;

    return 0;
}