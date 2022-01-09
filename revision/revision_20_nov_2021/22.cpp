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
#include<iostream>
using namespace std;

int main(){
    int r1, c1;
    cin>>r1>>c1;
    int mtx1[r1][c1];
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            cin>>mtx1[i][j];
        }
    }
    for(int i=0; i<r1; i++){
        for(int j=0; j<c1; j++){
            cout<<mtx1[i][j]<<" ";
        }
        cout<<endl;
    }

    int r2, c2;
    cin>>r2>>c2;
    int mtx2[r2][c2];
    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            cin>>mtx2[i][j];
        }
    }

    for(int i=0; i<r2; i++){
        for(int j=0; j<c2; j++){
            cout<<mtx2[i][j]<<" ";
        }
        cout<<endl;
    }

    int r3 = r1;
    int c3 = c2;
    int common = c1;
    int mtx3[r3][c3];
    for(int i=0; i<r3; i++){
        for(int j=0; j<c3; j++){
            for(int k=0; k<common; k++){
                cout<<a
            }
        }
    }
    return 0;
}


/*
    2 3 4 7
    3 4 4 8

    4 5
    2 3    
    6 7

    0 0 0
    0 0 0
    0 0 0
    0 0 0
*/