#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <fstream>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;
class Person
{
public:
    float age;
    string name;
    bool operator<(const Person &rhs) const { return age < rhs.age; }
    bool operator>(const Person &rhs) const { return age > rhs.age; }
};

int main()
{
    //in decreasing order
    set<Person, greater<Person>> Set = {{30, "Rupesh"}, {25, "Hitesh"}, {22, "Jhon"}};
    //in increase order
    set<Person> Set = {{30, "Rupesh"}, {25, "Hitesh"}, {22, "Jhon"}};
    for (const auto &e : Set)
    {
        cout << e.age << " " << e.name << endl;
    }

    return 0;
}