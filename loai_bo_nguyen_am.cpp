#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int main()
{
    string s;
    cin >> s;
    string s1 = "UEOAIYueoaiy";
    for (int i = 0; i < s.size(); i++)
    {
        int dem = 0;
        for (int j = 0; j < s1.size(); j++)
        {
            if (s1[j] == s[i])
            {
                dem = 1;
            }
        }
        if (dem == 0)
            cout << "." << (char)tolower(s[i]);
    }
}