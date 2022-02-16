/*
    Binary Search Challenge 2(Page Allocation Problem)

    PROBLEM:- Allocate minimum pages

    n - number of pages in n different books(Ascending order)
    m - no of students


    All te books have to be divided among m students, consecutively. Allocate the pages in such a way that maximum pages 
    allocated a student is minimum.


    Strategy:
        - Apply binary searcg for minimum & maximum possible values of 'max' pages.
        - check the feasibility of the chosed value
        - Feasability logic:-
            - Assign pages to each student in a sequential manner, thile the current number of allocated pages
              don'e exceed the value set by binary search
            - If during allocation the number of students don't exceed the limit of 'm', then the solution is feasible Else, it isn't
*/ 


#include "bits/stdc++.h"
#include <climits>
using namespace std;

bool isPossible(int arr[], int n, int m, int min){
     int studentsRequired = 1;
     int sum = 0;

     for(int i=0; i<n; i++){
         if(arr[i] > min){
             return false;
         }
         if(sum + arr[i] > min){
             studentsRequired ++;
             sum = arr[i];

             if(studentsRequired > m){
                 return false;
             }
         }else{
             sum += arr[i];
         }
     }
     return true;
}

int allocateMinmumPage(int arr[], int n, int m){
    if(n < m) -1;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    int start = 0, end = sum, ans = INT_MAX;
    while(start <= end){
        int mid = (start + end)/2;
        if(isPossible(arr, n, m, mid)){
            ans = min(ans, mid);
            end = mid -1;
        } else {
            start = mid + 1;
        }
    }

    return ans;
}

int main() {
    int arr[] = {12, 34, 67, 90};
    int n = 4;
    int m = 2;
    cout << "The minimum no of page: " << allocateMinmumPage(arr, n, m) << endl;
}