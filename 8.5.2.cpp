#include <iostream>
using namespace std;

void findSubArrayWithGivenSum1(int arr[], int n, int s){
    bool found = false;
    int i=0, j=0;
    for(; i<n; i++){
        int sum = 0;
        for(j=i; j<n; j++){
            sum+=arr[j];
            if(sum == s){
                found = true;
                break;
            }
        }
        if(found == true){
            break;
        }
    }
    cout<<i+1<<" "<<j+1<<endl;

}

int main(){
    int n, s;
    cin>>n>>s;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    findSubArrayWithGivenSum1(arr, n, s);
    
    return 0;
}


// #include <iostream>
// using namespace std;

// // Find Subarrays with given sum
// void findSubArraysWithGivenSum(int arr[], int n, int s){
//     int st = 0, en = 0, sum = 0;
//     while(st < n && en < n && sum != s){
//         if(sum > s &&  st < en){
//             sum -= arr[st];
//             st++;
//         }
//         else{
//             sum += arr[en];
//             en++;
//         }
//     } 
//     if(sum == s){
//         cout<<st+1<<" "<<en<<endl;
//     }
// }

// int main(){
//     #ifndef ONLINE_JUDGE
//         freopen("input.txt", "r", stdin);
//         freopen("output.txt", "w", stdout);
//     #endif 

//     int n, s;
//     cin>>n>>s;

//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }

//     findSubArraysWithGivenSum(arr, n, s);

//     return 0;
// }