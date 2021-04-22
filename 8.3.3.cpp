#include <iostream>
using namespace std;
int main(){
    // input output code
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif


    // Selection Sort
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }




    for(int i = 0; i<n -1; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i] > arr[j]){
                cout<<"Inside: arr["<<i<<"] = "<<arr[i]<<", arr["<<j<<"] = "<<arr[j]<<endl;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

/*
    Selection Sort
     
    Find the minimum element in unsorted array
    and swap it with element at begining

*/