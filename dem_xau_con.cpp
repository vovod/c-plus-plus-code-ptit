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
        int k;
        cin >> s >> k;
        int res = 0;
        for (int i = 0; i < s.length(); i++)
        {
            int cnt[256] = {0};
            int dem = 0;
            for (int j = i; j < s.length(); j++)
            {
                if (cnt[s[j]] == 0)
                    ++dem;
                if (dem == k)
                    res++;
                else if (dem > k)
                    break;
                cnt[s[j]]++;
            }
        }
        cout << res << endl;
    }
}