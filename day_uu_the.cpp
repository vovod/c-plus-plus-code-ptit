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
        scanf("\n");
        string s;
        getline(cin, s);
        int l = 0;
        int c = 0;
        s = s + " ";
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                if (s[i - 1] % 2 == 0)
                    c++;
                else
                    l++;
            }
        }
        if ((((l + c) % 2 == 0) && (c > l)) || (((l + c) % 2 == 1) && (c < l)))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}