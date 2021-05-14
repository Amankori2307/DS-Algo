#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();

    // To Take Sentenece Input
    char arr[n+1];
    cin.getline(arr, n);
    cin.ignore();

    int i = 0;
    int maxLength = 0;
    int currLength = 0;
    int start =0, maxStart=0;
    while(arr[i] != '\0'){
        if(arr[i] == ' '){
            currLength = 0;
            start = i+1;
        }else{
            currLength++;
            if(currLength > maxLength){
                maxLength = currLength;
                maxStart = start;
            }
        }
        i++;
        
    }
    cout<<maxLength<<endl;
    for(int i = maxStart; i<maxStart+maxLength; i++){
        cout<<arr[i];
    }
}