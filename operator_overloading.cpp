#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <fstream>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;

class Base
{
private:
    int a;

public:
    void get()
    {
        cin >> a;
    }
    // void compare(Base t)//function for operoverloading
    void operator==(Base t) //operator overloading
    {
        if (a == t.a)
        {
            cout << "they are equal";
        }
        else
        {
            cout << "they are not equal";
        }
    }
};

int main()
{
    Base t1, t2;
    cout << "enter the value of t1" << endl;
    t1.get();
    cout << "enter the value of t2" << endl;
    t2.get();
    // t1.compare(t2);//if we use function to operate
    t1 == t2; //operator overloading
    return 0;
}