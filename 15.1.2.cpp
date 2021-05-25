#include<iostream>
using namespace std;

void primeFactor(int num){
    int N = num+1;
    int spf[N];
    for(int i=0; i<N; i++){
        spf[i] = i;
    }

    for(int i=2; i<N; i++){
        if(spf[i] == i){
            for(int j=i*i; j<N; j+=i){
                if(spf[j] == j){
                    spf[j] = i;
                }
            }
        }
    }
    while(num != 1){
        cout<<spf[num]<<" ";
        num = num / spf[num];
    }

}
int main(){
    int num;
    cin>>num;
    primeFactor(num);
    return 0;
}