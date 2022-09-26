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
        s = s + " ";
        int dem = 1;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] != s[i - 1])
            {
                cout << s[i - 1] << dem;
                dem = 1;
            }
            else
                dem++;
        }
        cout << endl;
    }
}