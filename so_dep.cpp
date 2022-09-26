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
    scanf("\n");
    while (t--)
    {
        string s;
        getline(cin, s);
        //scanf("\n");
        int dem = 0;
        // cout << s << endl;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] % 2 != 0)
            {
                dem = 1;
                break;
            }
            if (s[i] != s[s.size() - i - 1])
            {
                dem = 1;
                break;
            }
        }
        if (dem == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}