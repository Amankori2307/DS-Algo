#include <iostream>
using namespace std;

int main(){
    int n, m, elementToSearch;
    cin>>n>>m>>elementToSearch;

    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    // Matrix Search
    // Note: Items are sorted column wise and row wise

    // We can start from top-right and left-bottom
    int r = 0, c = m-1;
    bool found = false;
    while(r < n && c >= 0){
        if(elementToSearch == arr[r][c]){
            found = true;
            break;
        }
        else if(arr[r][c] < elementToSearch){
            r++;
        }else{
            // if value is greater than element to search
            c--;
        }
    }

    if(found){
        cout<<"Found";
    }else{
        cout<<"Not Found";
    }
    return 0;
}