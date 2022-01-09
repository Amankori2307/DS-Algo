// 19. Search an element in 2D-Array
#include<iostream>
using namespace std;

int main(){
    int n, m, k;
    cin>>n>>m>>k;
    int arr[n][m];
    for(int i=0 ;i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == k){
                cout<<i<<" "<<j;
                return 0;
            }
        }
    }
    return 0;
}