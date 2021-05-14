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

    // Transpose Matrix
    for(int i=0; i<n; i++){
        for(int j=i+1; j<m; j++){
            // Swap arr[i][j] with arr[j][i]
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }


    // print Transposed Matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}