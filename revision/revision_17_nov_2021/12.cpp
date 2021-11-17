// 12. Find sub array with given sum
#include<iostream>
using namespace std;

void findSubArrayWithGivenSum(int arr[], int n, int s){
    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=i; j<n; j++){
            sum += arr[j];
            if(sum == s){
             cout<<i<<" "<<j<<endl;
             return;   
        }
        }
    }
    cout<<"Not Found"<<endl;
}
int main(){
    int n, sum;
    cin>>n>>sum;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    findSubArrayWithGivenSum(arr, n, sum);

    return 0;
}