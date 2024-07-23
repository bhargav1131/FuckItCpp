/*
Approach: We will first find the first index of 0 in the list, and make a pointer J point at it and a pointer 'i'
point to next of j. Whenever a[i] is non zero we will swap it with a[j]
*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void moveZeroes(int arr[], int n){
    int j = -1;
    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }
    if (j == -1){
        cout << "No zeroes to be moved" ;
    }
    
    else{
        for(int i=j+1; i<n; i++){
            if(arr[i] != 0){
                swap(arr[i], arr[j]);
                j++;
            }
        }
    }
}

int main()
{
    int arr[8] = {1,0,2,0,7,0,0,3}; // O/p: 1,2,7,3,0,0,0,0
    moveZeroes(arr, 8);

    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] <<" ";
    }  
    return 0;
}