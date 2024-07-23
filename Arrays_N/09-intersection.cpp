#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector <int> arrayIntersection (vector<int> &a, vector <int> &b){
    int m = a.size();
    int n = b.size();
    int i = 0, j = 0;
    vector<int> ans;

    while(i<m && j<n){
        if(a[i] < b[j]){
            i++; // means cannot have a math
        }
        else if(b[j] < a[i]){
            j++;
        }
        else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    return ans;
}

int main()
{
    vector <int> arr{2, 3 , 3, 4, 5, 7};
    vector <int> arr2{1, 2, 3, 3, 4, 8, 9};
    vector <int> ans = arrayIntersection(arr, arr2);

    for(int i : ans)
        cout << ans[i] <<" ";
    return 0;
}