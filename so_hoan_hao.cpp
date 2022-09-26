#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int Ngto(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return n > 1;
}

long long ans[11];
int d = 0;
void init()
{
    for (int i = 1; i <= 32; i++)
    {
        if (Ngto(i))
        {
            int tmp = (int)pow(2, i) - 1;
            if (Ngto(tmp))
                ans[d++] = 1ll * tmp * (int)pow(2, i - 1);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        init();
        long long n;
        cin >> n;
        int ok = 0;
        for (int i = 0; i <= 10; i++)
        {
            if (ans[i] == n)
            {
                ok = 1;
                break;
            }
        }
        if (ok)
            cout << "1\n";
        else
            cout << "0\n";
    }
}