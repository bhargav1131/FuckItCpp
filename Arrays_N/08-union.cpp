//Note: Only for sorted arrays
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> arrayUnion(vector<int> a, vector<int> b)
{
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;

    vector<int> unionArr;
    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            if (unionArr.size() == 0 || unionArr.back() != a[i])
                unionArr.push_back(a[i]);
            i++;
        }
        else
        {
            if (unionArr.size() == 0 || unionArr.back() != b[j])
                unionArr.push_back(b[j]);
            j++;
        }
    }

    while (i < n1)
    {
        if (unionArr.size() == 0 || unionArr.back() != a[i])
            unionArr.push_back(a[i]);
        i++;
    }

    while (j < n2)
    {
        if (unionArr.size() == 0 || unionArr.back() != b[j])
            unionArr.push_back(b[j]);
        j++;
    }
    return unionArr;
}

int main()
{
    vector<int> arr{1,2,3,4,5};
    vector<int> arr2{1,2,3,5,6};


    vector<int> ans = arrayUnion(arr, arr2);
    for (int i : ans)
    {
        cout << i << " ";
    }
    return 0;
}