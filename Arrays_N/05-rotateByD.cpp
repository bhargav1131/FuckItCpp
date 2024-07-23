/*
if the size of an array is N, anad we do N rotations then we get the original array back. So we calculate D as
D = D % N, if D=20, N=7, 20 % 7 = 6, so we merely need to do 6 rotations only.

solutions: input: {1,2,3,4,5,6}, D=3
. Rotate from 1 to 3 -> 3,2,1
. Rotate frome 4 to 6 -> 6,5,4
. Array = 3,2,1,6,5,4
. Rotate the whole: 4,5,6,1,2,3
*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void rotateByD(int arr[], int n, int d)
{
    d = d % n;
    reverse(arr, arr+3);
    reverse(arr+3, arr+n);
    reverse(arr, arr+n);
    for(int i=0; i<n; i++)
        cout << arr[i] <<" ";
}

int main()
{
    int arr[7] = {2,3,1,5,7,8,6};
    rotateByD(arr,7,3);
    return 0;
}