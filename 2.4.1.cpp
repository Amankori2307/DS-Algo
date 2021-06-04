#include <iostream>
using namespace std;

int main(){

    // Sum of n numbers
    int n;
    cin>>n;

    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }

    cout<<sum<<endl;
    return 0;
}