#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void twoSum(vector<int> arr, int k){
    for(int i=0; i<arr.size(); i++)
        for(int j=i+1; j<arr.size(); j++){
            int sum = 0;
            sum = arr[i] + arr[j];
            if(sum == k){
                cout << "i: " << i << "(" <<arr[i] <<")"<<" j: "<< j<< "(" <<arr[j] <<")"<<endl;
            }
        }
} 

int main()
{
    vector<int> arr{2,3,1,5,7,8,6};
    twoSum(arr, 10);
    return 0;
}