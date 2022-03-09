/*
    Greedy || Optimal pattern merge

    Problem: You are give n files with their computation times in an array.
    Operation: Choose/Take any two files, add their computation times and append it to the list of computation times 
    {Cost = Sum of computation time}

    Do this until we are left with only one file in the array. We have to do this operation such that we get minimum 
    cost finally.
*/ 


 #include<iostream>
 #include<vector>
 #include<algorithm>
 using namespace std;

int optimalPatternMerge(vector<int>  files){
    sort(files.begin(), files.end());
    int sum = 0;
    int prevSum = files[0];
    for(int i=1; i<files.size(); i++){
        prevSum += files[i];
        sum += prevSum;
    }
    return sum;
}

 int main(){
     int n;
     cin >> n;

     vector<int> files(n);
     for(int i=0; i<n; i++){
         cin >> files[i];
     }
    // cout << "HERE";
     cout << optimalPatternMerge(files);
     return 0;
 }