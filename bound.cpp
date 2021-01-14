//This program to find first occurence of the number in the sorted array
//--> if yes print the index
//--> if no print -1
/*
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
    int index, num, size;
    int arr[] = {1, 4, 4, 4, 4, 10, 11, 9, 9};
    size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + size);
    // for (int i = 0; i < n; i++)//check weather the array is sorted or not
    // {
    //     cout << arr[i] << ",";
    // }
    cin >> num;
    index = lower_bound(arr, arr + size, num) - arr;
    if (index != size && arr[index] == num)
    {
        cout << index << " index in a sorted array" << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}
*/

//Last occurance of X in the sorted array
/*
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
    int index, num, size;
    int arr[] = {1, 4, 4, 4, 9, 9, 10, 11};
    size = sizeof(arr) / sizeof(arr[0]);
    // sort(arr, arr + size);
    cin >> num;
    index = upper_bound(arr, arr + size, num) - arr;

    index--;
    if (index >= 0 && arr[index] == num)
    {
        cout << index << " index in a sorted array" << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}
*/

//Largest number smaller than X
/*
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
    int index, num, size;
    int arr[] = {1, 4, 4, 4, 9, 9, 10, 11};
    size = sizeof(arr) / sizeof(arr[0]);
    // sort(arr, arr + size);
    cin >> num;
    index = lower_bound(arr, arr + size, num) - arr;
    index--;
    if (index >= 0)
    {
        cout << arr[index] << " is the largest smaller number in a sorted array" << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}
*/

//Smallest number greater than X

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
    int index, num, size;
    int arr[] = {1, 4, 4, 4, 9, 9, 10, 11};
    size = sizeof(arr) / sizeof(arr[0]);
    // sort(arr, arr + size);
    cin >> num;
    index = upper_bound(arr, arr + size, num) - arr;
    if (index != size)
    {
        cout << arr[index] << " in a sorted array" << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}