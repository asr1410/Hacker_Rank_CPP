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
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num_of_element;
    cin >> num_of_element;
    vector<int> v1;
    for (int i = 0; i < num_of_element; i++)
    {
        int value;
        cin >> value;
        v1.push_back(value);
    }
    sort(v1.begin(), v1.end()); //auto sortdone in decrease order
    // sort(v1.begin(), v1.end(), greater<int>()); //for sort in decrese order
    // for (int i = 0; i < v1.size(); i++)
    // {
    //     cout << v1.at(i) << " ";
    // }
    cout << "Sorted \n";
    for (auto x : v1) //it print all the value present in the array
        cout << x << " ";

    return 0;
}
