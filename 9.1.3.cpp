#include <iostream>
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


    // Spiral Order Traversal
    int rowStart = 0, rowEnd = n-1;
    int colStart = 0, colEnd = m-1;

    while(rowStart <= rowEnd && colStart <= colEnd){
        // Print upper row
        for(int i = colStart; i<= colEnd; i++){
            cout<<arr[rowStart][i]<<" ";
        }
        rowStart++;

        // Pring right column
        for(int i = rowStart; i<= rowEnd; i++){
            cout<<arr[i][colEnd]<<" ";
        }
        colEnd--;

        // Pring Bottom Row
        for(int i = colEnd; i >= colStart; i--){
            cout<<arr[rowEnd][i]<<" ";
        }
        rowEnd--;

        // Print Left Column
        for(int i = rowEnd; i >= rowStart; i--){
            cout<<arr[i][colStart]<<" ";
        }
        colStart++;

    }
    return 0;
}