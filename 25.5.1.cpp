#include<iostream>
#include<stack>
using namespace std;

// The Stock Span Problem
void stockSpanBruteForce(int arr[], int n){
    for(int i=0; i<n; i++){
        int days = 0;
        for(int j = i; j >= 0; j--){
            if(arr[j] <= arr[i]){
                days++;
            }else{
                break;
            }
        }
        cout<<days<<" ";
    }
    cout<<endl;
}

void stockSpanWithStack(int arr[], int n){
    stack<pair<int, int>> st;
    for(int i=0; i<n; i++){
        int days = 1;
        while(!st.empty() && st.top().first <= arr[i]){
            days += st.top().second;
            st.pop();
        }
        cout<<days<<" ";
        st.push(make_pair(arr[i], days));
    }
    cout<<"\n";
}
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // stockSpanBruteForce(arr, n);
    stockSpanWithStack(arr, n);
    return 0;
}