#include<iostream>
#include<climits>
#include<stack>
using namespace std;

// Largest Rectange In Histogram

int largestRectangeInHistogramBruteforce(int arr[], int n){
    int area = INT_MIN;
    for(int i=0; i<n; i++){
        int minH = INT_MAX;
        for(int j=i; j<n; j++){
            minH = min(arr[j], minH);
            int l = j-i+1;
            area = max(minH * l, area);
        }
    }
    return area;
}

int largestReactangleInHostogramUsingStack(int arr[], int n){
    stack<int> st;
    int a = INT_MIN;
    
    for(int i=0; i<n; i++){
        while(!st.empty() && arr[i] < arr[st.top()]){
            int idx = st.top();
            st.pop();
            a = max(arr[idx] * (i-idx), a);
        }
        st.push(i);
    }
    while(!st.empty()){
        int idx = st.top();
        st.pop();
        a = max(arr[idx] * (n-idx), a);
    }
    return a;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // cout<<largestRectangeInHistogramBruteforce(arr, n)<<endl;
    cout<<largestReactangleInHostogramUsingStack(arr, n)<<endl;

    return 0;
}