#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int d = 0;
        for (int i = 0, j = n - 1; i <= j;)
        {
            if (a[i] == a[j])
            {
                i++;
                j--;
            }
            else if (a[i] > a[j])
            {
                j--;
                a[j] += a[j + 1];
                d++;
            }
            else
            {
                i++;
                a[i] += a[i - 1];
                d++;
            }
        }
        cout << d << endl;
    }
}