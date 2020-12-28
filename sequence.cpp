#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int num1, num2;
    cin >> num1;
    cin >> num2;
    //CONDITION LOOP
    for (int i = num1; i < num2 + 1; i++)
    {
        if (i >= 1 && i <= 9)
        {
            if (i == 1)
            {
                cout << "one";
            }
            else if (i == 2)
            {
                cout << "two";
            }
            else if (i == 3)
            {
                cout << "three";
            }
            else if (i == 4)
            {
                cout << "four";
            }
            else if (i == 5)
            {
                cout << "five";
            }
            else if (i == 6)
            {
                cout << "six";
            }
            else if (i == 7)
            {
                cout << "seven";
            }
            else if (i == 8)
            {
                cout << "eight";
            }
            else
            {
                cout << "nine";
            }
            cout << endl;
        }
        else if (i % 2 == 0)
        {
            cout << "even" << endl;
        }
        else
        {
            cout << "odd" << endl;
        }
    }

    return 0;
}