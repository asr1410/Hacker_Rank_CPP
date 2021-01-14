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
    // vector<int> values = {1, 2, 3, 4, 5};
    // for (int i = 0; i < values.size(); i++)
    // {
    //     cout << values[i] << endl;
    // }

    // for (int value : values)
    // {
    //     cout << value << endl;
    // }

    // for (vector<int>::iterator it = values.begin(); it != values.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    using ScoreMap = unordered_map<string, int>;
    ScoreMap map;
    map["C"] = 20;
    map["C++"] = 30;
    for (ScoreMap::const_iterator it = map.begin();
         it != map.end(); it++)
    {
        auto &key = it->first;
        auto &value = it->second;
        cout << key << " = " << value << endl;
    }

    for (auto kv : map)
    {
        auto &key = kv.first;
        auto &value = kv.second;
        cout << key << " = " << value << endl;
    }

    //C++17
    // for (auto [key, value] : map)
    // {
    //     cout << key << " = " << value << endl;
    // }

    return 0;
}