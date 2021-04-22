#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int a, b;
    cin>>a>>b;

    // Solid Rectangle
    // for(int i = 1; i <= a; i++){
    //     for(int j = 1; j <= b; j++){
    //         cout<<"* ";
    //     }
    //     cout<<"\n";
    // }

    // Hollow Rectangle
    // for(int i = 1; i <= a; i++){
    //     for(int j = 1; j <= b; j++){
    //         if(i == 1 || i == a || j == 1 || j == b){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<"\n";
    // }

    // Half Pyramid
    // for(int i = 1; i <= a; i++){
    //     for(int j = 1; j <= i; j++){
    //         cout<<"* ";
    //     }
    //     cout<<"\n";
    // }

    // Inverted Half Pyramid
    // for(int i = 1; i <= a; i++){
    //     for(int j = 1; j <= a+1-i; j++){
    //         cout<<". ";
    //     }
    //     cout<<"\n";
    // }

    // Print Half Pyramid after 180 degree rotation
    // for(int i = 1; i <= a; i++){
    //     for(int j = 1; j <= a; j++){
    //         if(j > a-i)
    //             cout<<"* ";
    //         else
    //             cout<<"  ";
    //     }
    //     cout<<"\n";
    // }

    // Print Half Pyramid Using Numbers
    // for(int i = 1; i <= a; i++){
    //     for(int j = 1; j <= i; j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<"\n";
    // }

    // Print Inverted Half Pyramid Using Numbers
    // for(int i = a; i > 0; i--){
    //     for(int j = 1; j <= i; j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<"\n";
    // }

    // Print Half Pyramid Using Numbers 2
    // for(int i = 1; i <= a; i++){
    //     for(int j = 1; j <= i; j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<"\n";
    // }

    // Print Inverted Half Pyramid Using Numbers 2
    // for(int i = a; i > 0; i--){
    //     for(int j = 1; j <= i; j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<"\n";
    // }

    // Print Floyed Triangle
    // int n = 1;
    // for(int i = 1; i <= a; i++){
    //     for(int j = 1; j <= i; j++){
    //         cout<<n<<" ";
    //         n++;
    //     }
    //     cout<<"\n";
    // }
    // return 0;

    // Print 0-1 Pattern
    // for(int i = 1; i <= a; i++){
    //     for(int j = 1; j <= i; j++){
    //         if((i+j)%2 == 0){
    //             cout<<"0 ";
    //         }else{
    //             cout<<"1 ";
    //         }
    //     }
    //     cout<<"\n";
    // }

    // Palindrome Pattern
    // for(int i = 1; i <= a; i++){
    //     for(int j = 1; j <= a*2;j++){
    //         if(j > a-i and j < (2*a)-(a-i)){
    //             cout<<"* ";
    //         }else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<"\n";
    // }

    // Rhombus Pattern
    // for(int i = 1; i <= a; i++){
    //     for(int j = 1; j <=a-i; j++){
    //         cout<<" ";
    //     }
    //     for(int k = 1; k <= a; k++){
    //         cout<<"* ";
    //     }
    //     cout<<"\n";
    // }

    // Number Pattern
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= a-i; j++){
            cout<<" ";
        }
        for(int k = 1; k <= i; k++){
            cout<<k<<" ";
        }
        cout<<"\n";
    }
}