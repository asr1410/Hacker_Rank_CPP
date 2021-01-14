#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <fstream>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n, x;
    // cin >> n;
    cin >> x;
    int arr[] = {1, 4, 4, 4, 10, 11, 9, 9};
    // n = sizeof(arr) / sizeof(arr[0]);
    n = *(&arr + 1) - arr;
    // cout << <<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    sort(arr, arr + n);
    // bool res = binary_search(arr, arr + n, 9);
    int ind = lower_bound(arr, arr + n, x) - arr;
    cout << ind << endl;
    cout << n << endl;
    // cout << res << endl;
    if (ind != n && arr[ind] == x)
    {
        cout << ind << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}