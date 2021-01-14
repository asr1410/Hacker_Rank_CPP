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
    int size, num, index;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int check;
    cin >> check;
    for (int i = 0; i < check; i++)
    {
        cin >> num;
        index = lower_bound(arr, arr + size, num) - arr;
        if (index != size && arr[index] == num)
        {
            cout << "Yes " << index + 1 << endl;
        }
        else
        {
            index = upper_bound(arr, arr + size, num) - arr;
            cout << "NO " << index + 1 << endl;
        }
    }

    return 0;
}