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
        int dem = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (i == 0)
            {
                if (s[i] != s[i + 1] - 1 && s[i] != s[i + 1] + 1)
                    dem++;
            }
            else if (i == s.size() - 1)
            {
                if (s[i] != s[i - 1] - 1 && s[i] != s[i - 1] + 1)
                    dem++;
            }
            else
            {
                if (s[i] != s[i - 1] - 1 && s[i] != s[i - 1] + 1 && s[i] != s[i + 1] - 1 && s[i] != s[i + 1] + 1)
                    dem++;
            }
        }
        if (dem == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}