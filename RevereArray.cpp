// #include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define lld long double
#define tt    \
    int t;    \
    cin >> t; \
    while (t--)

int main()
{
    int n;
    cout << "Enter the size of the arry : \n";
    cin >> n;
    int a[n], i, tem;
    cout << "Enter the ELEMENTS of the arry : \n";
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n / 2; i++)
    {
        tem = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = tem;
    }
    cout << "Reversed array is : \n";
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    sort(a, a + n);

    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}