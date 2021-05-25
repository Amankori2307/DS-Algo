#include<iostream>
using namespace std;
// Sum of n natural n0

int sum(int num){
    if(num == 0){
        return 0;
    }

    return num+sum(num-1);

}

int main(){
    int num;
    cin>>num;

    cout<<sum(num)<<endl;
    return 0;
}