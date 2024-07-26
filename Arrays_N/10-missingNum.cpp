// You'll be given a number N, and an array consisting of N-1 numbers from 1 to N. You need to find the missing number

#include<iostream>
using namespace std;

int findMissing(int arr[], int n, int num){
    int totalSum = (num*(num+1))/2;

    int givenSum = 0;
    for(int i=0; i<n; i++){
        givenSum = givenSum + arr[i];
    }

    return totalSum - givenSum;
}

int main()
{
    int arr[4] = {1,2,3,5};

    int result = findMissing(arr,4, 5);
    cout <<"Missing number is " << result;
    return 0;
}