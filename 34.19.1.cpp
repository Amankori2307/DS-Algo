/*
    Problem: Sorrounded Region

    TEST CASESS:
        TEST1: 
        Input:
                X  O  X  O  X
                O  X  O  X  O
                X  O  O  O  X
                X  O  O  O  X
                O  X  O  X  O
                X  O  X  O  X
        Output:
                X  O  X  O  X
                O  X  X  X  O
                X  X  X  X  X
                X  X  X  X  X
                O  X  X  X  O
                X  O  X  O  X
*/ 


#include<iostream>
using namespace std;

#define N 6
#define M 5

void floodFill(char mat[N][M], int x, int y, char prevC, char newC){
    if(x < 0 || x >= N || y < 0 || y >= M) return;
    if(mat[x][y] != prevC) return;

    mat[x][y] = newC;

    floodFill(mat, x+1, y, prevC, newC);
    floodFill(mat, x-1, y, prevC, newC);
    floodFill(mat, x, y+1, prevC, newC);
    floodFill(mat, x, y-1, prevC, newC);
}

void swapChar(char mat[N][M], char prevC, char newC){
    for(int x=0; x<N; x++){
        for(int y=0; y<M; y++){
            if(mat[x][y] == prevC){
                mat[x][y] = newC;
            }
        }
    }
}

void printMat(char mat[N][M]){
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cout << mat[i][j] << "  ";
        }
        cout << endl;
    }
}

int main() {
    char mat[N][M] = {
        {'X', 'O', 'X', 'O', 'X'},
        {'O', 'X', 'O', 'X', 'O'},
        {'X`', 'O', 'O', 'O', 'X'},
        {'X', 'O', 'O', 'O', 'X'},
        {'O', 'X', 'O', 'X', 'O'},
        {'X', 'O', 'X', 'O', 'X'},
    };

    swapChar(mat, 'O', '-');

    // Flood fil on all the edges
    for(int i=0; i<M; i++){
        if(mat[0][i] == '-'){
            floodFill(mat, 0, i, '-', 'O');
        }
    }
    for(int i=0; i<N; i++){
        if(mat[i][0] == '-'){
            floodFill(mat, i, 0, '-', 'O');
        }
    }
    for(int i=0; i<M; i++){
        if(mat[N-1][i] == '-'){
            floodFill(mat, N-1, i, '-', 'O');
        }
    }
    for(int i=0; i<N; i++){
        if(mat[i][M-1] == '-'){
            floodFill(mat, i, M-1, '-', 'O');
        }
    }

    swapChar(mat, '-', 'X');
    printMat(mat);
    return 0;
}    
