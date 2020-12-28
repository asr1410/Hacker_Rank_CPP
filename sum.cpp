#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[3], sum = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << sum;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
