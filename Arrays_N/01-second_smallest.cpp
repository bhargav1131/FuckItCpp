#include<iostream>
using namespace std;

void secondLargest(int arr[], int n){
    int sLargest, largest;
    largest = arr[0];
    sLargest = -1;

    for(int i=0; i<n ; i++){
        if(arr[i] > largest){
            sLargest = largest;
            largest = arr[i];
        }
        if(arr[i] < largest && arr[i] > sLargest){
            sLargest = arr[i];
        }
    }
    cout << "Second Largest is: " << sLargest << endl;
}

void secondSmallest(int arr[], int n){
    int sSmallest, smallest;
    smallest = arr[0];
    sSmallest = 10000;

    for(int i=0; i<n ; i++){
        if(arr[i] < smallest){
            sSmallest = smallest;
            smallest = arr[i];
        }
        if(arr[i] > smallest && arr[i] < sSmallest){
            sSmallest = arr[i];
        }
    }
    cout << "Second Smallest is: " << sSmallest << endl;
}

int main()
{
    int arr[5] = {1, 5, 2, 5, 4};
    secondLargest(arr, 5);
    secondSmallest(arr, 5);
    return 0;
}