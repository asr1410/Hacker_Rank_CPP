#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, s2, s;
    cin >> s1;
    cin >> s2;
    s = s1 + s2;
    cout << s1.length() << " " << s2.length() << endl;
    cout << s << endl;
    char temp;
    temp = s1[0];
    s1[0] = s2[0];
    s2[0] = temp;
    cout << s1 << " " << s2 << endl;
    return 0;
}