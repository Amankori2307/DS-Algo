// Matrix Multiplication
/* 
    Given two 2-Dimensional array of sizes n1Xn2 and n2Xn3. Your task is to 
    multiply these matrices and output the multiples matrix
*/ 
// Note: no of columns of Matrics1 should be same as no of rows for column 2
/*
      (A)          (B)          (C)     
    2 4 1 2       1 2 3       33 42 51
    8 4 3 6   X   4 5 6   =   69 90 111
    1 7 9 5       7 8 9       112 134 156
                  4 5 6

    i 1
    j 2

    111 = 
    111 = 
    Matrix C[0][0] = (2*1)+(4*4)+(1*7)+(2*4)
    Resultant Matrix Dimensions Are: row of matrix 1, col of matrix 2

*/

#include <iostream>
using namespace std;

int main(){
    int n1, n2, n3;
    cin>>n1>>n2>>n3;

    int m1[n1][n2];
    int m2[n2][n3];
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            cin>>m1[i][j];
        }
    }

    for(int i=0;i<n2;i++){
        for(int j=0;j<n3;j++){
            cin>>m2[i][j];
        }
    }


    int ans[n1][n3];
    for(int i=0; i<n1; i++){
        for(int j=0; j<n3; j++){
            ans[i][j] = 0;
        }
    }

    // Multiply Matrix
    for(int i=0; i<n1; i++){
        for(int j=0; j<n3; j++){
            for(int k=0; k<n2; k++){
                ans[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    
    // Print Matrix
    for(int i=0; i<n1; i++){
        for(int j=0; j<n3; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;



}