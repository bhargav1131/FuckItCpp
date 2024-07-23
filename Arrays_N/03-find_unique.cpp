// find number of unique elements in a list

#include<iostream>
using namespace std;

int removeDuplicates(int arr[], int n){
    int i=0;
    for(int j=1; j<n; j++)
    {
        if(arr[j] != arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}

int main()
{
    int arr[7] = {1,1,2,2,3,3,3};
    int ans = removeDuplicates(arr, 7);
    cout << "Number of unique elements: " << ans;

    return 0;
}