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
        //vector<ll> a;
        map<ll, int> b;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            //a.push_back(x);
            while (x > 0)
            {
                int d = x % 10;
                b[d]++;
                x /= 10;
            }
        }
        for (int i = 0; i <= 9; i++)
        {
            if (b[i] > 0)
                cout << i << " ";
        }
        cout << endl;
    }
}