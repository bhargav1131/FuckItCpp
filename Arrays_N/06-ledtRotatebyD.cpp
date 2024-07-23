#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void leftRotate(int arr[], int n, int d){
    d = d % n;
    reverse(arr, arr+(n-d));
    reverse(arr+(n-d), arr+n);
    reverse(arr, arr+n);
    for(int i=0; i<n; i++)
        cout << arr[i] <<" ";
}

int main()
{
    int arr[7] = {2,3,1,5,7,8,6};
    leftRotate(arr,7,3);
    return 0;
}