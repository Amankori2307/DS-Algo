#include<iostream>
#include<climits>
#include<stack>
using namespace std;

// Trapping Rainwater Harvesting
int trappingRainwaterHarwesting(int arr[], int n){
    stack<int> st;
    int ans = 0;
    for(int i=0; i<n; i++){
        while(!st.empty() && arr[st.top()] < arr[i]){
            int cur = st.top();
            st.pop();
            if(st.empty()){
                break;
            }
            int diff = i - st.top() -1;
            int h =  min(arr[st.top()], arr[i]) - arr[cur];
            ans += diff*h;
        }
        st.push(i);
    }
    return ans;

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<trappingRainwaterHarwesting(arr, n);
    return 0;
}