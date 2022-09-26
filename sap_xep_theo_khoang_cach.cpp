#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int x;
bool ktra(int a, int b)
{
    return abs(x - a) < abs(x - b);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n >> x;
        int a[n];
        for (int &x : a)
            cin >> x;
        stable_sort(a, a + n, ktra);
        for (int x : a)
            cout << x << " ";
        cout << endl;
    }
}