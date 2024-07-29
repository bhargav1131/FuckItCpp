/*
First we will sort the array. Now we will sum index of start and index of end. If the sum is larger, we decrease end(end is larger) and it is smaller then we increase thee start.
*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string twoSum (vector<int> arr, int k){
    int n = arr.size();
    int start = arr[0];
    int end = arr[n-1];
    sort(arr.begin(), arr.end());

    while(start < end){
        int sum = arr[start] + arr[end];
        if(sum == k){
            return "YES";
        }
        else if(sum > k){
            end --;

        }
        else{
            start ++;
        }
    }
    return "NO";
}

int main()
{
    vector<int> arr{2,3,1,5,7,8,6};

    cout << twoSum(arr, 10) ;
    return 0;
}