#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int getMinDiff(int arr[], int n, int k)
{
    sort(arr, arr+n);
    int min_ = arr[0];
    int max_ = arr[n-1];
    int res = max_ - min_;
    for(int i = 1; i < n; i++)
    {
        min_ = min(arr[i]-k, arr[0]+k);
        max_ = max(arr[i-1]+k, arr[n-1]-k);
        res = min(res, max_ - min_);
    }
    return res;
}

int main()
{
    int k = 5, n = 10;
    int arr[n] = { 8, 1, 5, 4, 7, 5, 7, 9, 4, 6 };
    cout << getMinDiff(arr, n, k);
}


/* 

Time Complexity:
    For sorting this algo overall takes O(nlogn) time otherwise the logic takes O(n) time.
    
Space Complexity:
    This programme takes O(1) space.

*/  