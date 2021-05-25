#include <iostream>
using namespace std;

// Print All The Prime nos in a given range;
void sieveOfEratosthenes(int n){
    int arr[n+1];
    for(int i=0; i<n; i++){
        arr[i] = false;
    }

    cout<<endl;
    
    for(int i=2; i<n; i++){
        if(arr[i] == false){
            for(int j=i*i; j<n; j=j+i){
                arr[j] = true;
            }
        }
    }

    for(int i=2; i<n; i++){
        if(arr[i] == false){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}


int main(){
    int n;
    cin>>n;
    n=n+1;

    sieveOfErastosthenes(n);
    return 0;
}