#include <iostream>
using namespace std;

bool check(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        if (arr[i - 1] <= arr[i] && arr[i + 1] >= arr[i])
        {
        }
        else
            return false;
    }
    return true;
}

int main()
{
    int arr[5] = {1,2,3,4,1};

    bool ans = check(arr, 5);
    cout << ans;
    return 0;
}
