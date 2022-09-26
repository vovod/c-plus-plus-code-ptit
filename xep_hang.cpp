#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
#define max(a, b) (a > b ? a : b)
int main()
{
    int n;
    int a[105], t[105];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> t[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                swap(a[i], a[j]);
                swap(t[i], t[j]);
            }
        }
    }
    int m = a[0] + t[0];
    for (int i = 1; i < n; i++)
    {
        m = max(m, a[i]) + t[i];
    }
    cout << m << endl;
}