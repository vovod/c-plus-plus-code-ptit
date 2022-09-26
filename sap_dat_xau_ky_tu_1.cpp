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
        string s;
        cin >> s;
        int a[10005]={0};
        int dem = 0;
        for (int i = 0; i < s.size(); i++)
        {
            a[(int)s[i]]++;
            if (s.size() % 2 == 0)
            {
                if (a[(int)s[i]] > (s.size() / 2))
                    dem = 1;
            }
            else
            {
                if (a[(int)s[i]] > (s.size() + 1) / 2)
                    dem = 1;
            }
        }
        if (dem == 1)
            cout << 0 << endl;
        else
            cout << 1 << endl;
    }
}