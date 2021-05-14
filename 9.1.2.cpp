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
    bool found = false;
    int i = 0, j = 0;
    for(; i<n; i++){
        for(; j<m; j++){
            if(arr[i][j] == elementToSearch){
                found = true;
                
                break;
            }
        }
        if(found){
            break;
        }
    }

    if(found){
        cout<<i<<" "<<j;
    }else{
        cout<<"Not Found";
    }
    return 0;
}