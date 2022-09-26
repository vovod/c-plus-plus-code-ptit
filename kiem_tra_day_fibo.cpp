#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int fibo(long long n)
{
    long long a = 5 * n * n - 4;
    long long b = 5 * n * n + 4;
    if (((double)sqrt(a) == (int)sqrt(a)) || ((double)sqrt(b) == (int)sqrt(b)))
        return 1;
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[1005];
        int dem = 0;
        int dem1 = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if (fibo(a[i]) == 1)
                cout << a[i] << " ";
        }
        cout << endl;
    }
}