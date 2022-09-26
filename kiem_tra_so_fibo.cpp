#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
ll fibo[101];
void sinhfibo()
{
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i < 100; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
}
int main()
{
    int t;
    cin >> t;
    sinhfibo();
    while (t--)
    {
        ll n;
        cin >> n;
        int dem = 0;
        for (int i = 0; i < 100; i++)
        {
            if (fibo[i] == n)
            {
                dem = 1;
                break;
            }
        }
        if (dem == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}