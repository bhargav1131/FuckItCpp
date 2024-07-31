#include<iostream>
#include<vector>
using namespace std;

bool isSorted(vector<int> &arr){
    for(int i=1; i<arr.size(); i++)
    {
        if (arr[i-1] > arr[i]){
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> arr{10, 12, 23, 45, 55};

    if(isSorted(arr)){
        cout << "List is sorted";
    }

    else{
        cout << "List is unsorted";
    }
    return 0;
}