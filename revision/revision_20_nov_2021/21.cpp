// 21. Transpose a 2d-Matrix
#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    int arr2[m][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            arr2[j][i] = arr[i][j];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    // Transpose a matrix()
    return 0;
}


/*

    1 2 3
    4 5 6
    7 8 9

    1 4 7     
    2 5 8
    3 6 9

    1 2 3 4
    5 6 7 8

    1 0
    0 0
    0 0
    0 0

*/