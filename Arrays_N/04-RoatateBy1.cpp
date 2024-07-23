// rotate array by one place
// input: {1,2,3,4,5}
//output: {2,3,4,5,1}

#include<iostream>
using namespace std;

void rotateArray(int arr[], int n){
    int temp = arr[0];
    for(int i=1; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;

    for(int i=0; i<n; i++)
    {
        cout << arr[i] <<" ";
    }
}

int main()
{
    int arr[7] = {2,3,1,5,7,8,6};
    rotateArray(arr, 7);
    return 0;
}