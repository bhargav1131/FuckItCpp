// find number of unique elements in a list
//Note: We'll keep a ptr at the first element and another ptr at the second element. we will traverse using the second ptr and if any unequal element encounters, we will place it to the next of the element pointing at 'i'

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
    int arr[6] = {1,1,2,2,3,3};
    int ans = removeDuplicates(arr, 6);
    cout << "Number of unique elements: " << ans;

    return 0;
}