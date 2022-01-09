// 20. Spiral order traversal of 2D-Array
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

    // Spiral Order Traversal
    int rowStart = 0;
    int rowEnd = n-1;
    int colStart = 0;
    int colEnd = m-1;
    while(rowStart <= rowEnd && colStart <= colEnd){
        for(int i=colStart; i<=colEnd; i++){
            cout<<arr[rowStart][i]<<" ";
        }
        rowStart += 1;

        for(int i=rowStart; i<=rowEnd; i++){
            cout<<arr[i][colEnd]<<" ";
        }
        colEnd--;

        for(int i=colEnd; i>=colStart; i--){
            cout<<arr[rowEnd][i]<<" ";
        }
        rowEnd--;

        for(int i=rowEnd; i>=rowStart; i--){
            cout<<arr[i][colStart]<<" ";
        }
        colStart++;
    }
    return 0;
}

/*
    1 2 3
    4 5 6
    7 8 9

    1 3 4 6 9 7 8 4 5          
*/