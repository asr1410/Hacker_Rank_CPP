#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define size 100000
using namespace std;

int main()
{
    int num1, num2;
    cin >> num1;
    cin >> num2;
    int **outer = new int *[num1];
    for (int i = 0; i < num1; i++)
    {
        int k;
        cin >> k;
        outer[i] = new int[k];
        for (int j = 0; j < k; j++)
        {
            cin >> outer[i][j];
        }
    }

    while (num2 > 0)
    {
        int a, b;
        cin >> a;
        cin >> b;
        cout << outer[a][b] << endl;
        num2--;
    }

    return 0;
}