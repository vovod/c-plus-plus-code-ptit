#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int check(string a)
{
    for (int i = 0; i < (a.size() / 2); i++)
    {
        if (a[i] != a[a.size() - i - 1])
            return 0;
    }
    return 1;
}
int check1(char a, string b)
{
    for (int j = 0; j < b.size(); j++)
    {
        if (a == b[j] || a == tolower(b[j]))
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int t;
    cin >> t;
    string a1 = "ABC";
    string a2 = "DEF";
    string a3 = "GHI";
    string a4 = "JKL";
    string a5 = "MNO";
    string a6 = "PQRS";
    string a7 = "TUV";
    string a8 = "WXYZ";
    while (t--)
    {
        string s;
        cin >> s;
        string key = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (check1(s[i], a1) == 1)
                key = key + "2";
            if (check1(s[i], a2) == 1)
                key = key + "3";
            if (check1(s[i], a3) == 1)
                key = key + "4";
            if (check1(s[i], a4) == 1)
                key = key + "5";
            if (check1(s[i], a5) == 1)
                key = key + "6";
            if (check1(s[i], a6) == 1)
                key = key + "7";
            if (check1(s[i], a7) == 1)
                key = key + "8";
            if (check1(s[i], a8) == 1)
                key = key + "9";
        }
        // cout << key << endl;
        if (check(key) == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}