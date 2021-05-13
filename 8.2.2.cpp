#include <iostream>
using namespace std;

// Binary Srarch Program
int binarySearch(int arr[], int n, int key){
    int s = 0;
    int e = n;
    int m;
    while(s <= e){
        m = (s+e)/2;
        cout<<"M: "<<m<<endl;
        if(arr[m] == key)
            return m;
        
        if(arr[m] < key)
            s = m+1;
        
        if(arr[m] > key)
            e = m-1;
    }
    return -1;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binarySearch(arr, n, key);

}