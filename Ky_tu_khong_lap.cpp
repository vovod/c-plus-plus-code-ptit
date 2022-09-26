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
        // vector<int> a;
        map<int, int> b;
        // int dem = 0;
        for (int i = 0; i < s.size(); i++)
        {
            b[s[i]]++;
        }
        // sort(a.begin(), a.end());
        for (int i = 0; i < s.size(); i++)
        {
            if (b[s[i]] == 1)
            {
                // dem = dem + b[a[i]];
                cout << s[i];
                b[s[i]] = 0;
            }
        }
        cout << endl;
    }
}