// find the number that appears once and other twice
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getNum(vector <int> arr){
    int size = arr.size();
    int result = 0;
    for(int i=0; i<size; i++){
        result = result ^ arr[i];
    }
    return result;
}

int main()
{
    vector <int> arr{2,2,3,3,44,5,5};

    cout << "The number appearing once in the list is " << getNum(arr);
    return 0;
}