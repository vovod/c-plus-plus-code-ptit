#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int main()
{
    string s1;
    getline(cin, s1);
    string s2;
    cin >> s2;
    string s3 = "";
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] != ' ')
        {
            s3 = s3 + s1[i];
        }
        if (s1[i] == ' ' || i == s1.size() - 1)
        {
            if (s3 != s2)
                cout << s3 << " ";
            s3 = "";
        }
    }
    // cout << s1;
}