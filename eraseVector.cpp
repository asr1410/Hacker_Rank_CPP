#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void display(vector<int> v)
{
    for (auto x : v)
    {
        cout << x << " ";
    }
}
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, b, c, d;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        v.push_back(value);
    }
    cin >> b >> c >> d;
    v.erase(v.begin() + b - 1);
    v.erase(v.begin() + c - 1, v.begin() + d - 1);
    cout << v.size() << endl;
    display(v);
    return 0;
}
