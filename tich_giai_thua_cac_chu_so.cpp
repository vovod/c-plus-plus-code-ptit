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
        int n;
        cin >> n;
        string s;
        cin >> s;
        string tmp = "";
        for (int i = 0; i < s.size(); i++)
        {
            char x = s[i];
            if (x == '4')
            {
                tmp += "322";
            }
            else if (x == '6')
            {
                tmp += "35";
            }
            else if (x == '8')
            {
                tmp += "2227";
            }
            else if (x == '9')
            {
                tmp += "3327";
            }
            else if (x != '1' && x != '0')
                tmp += x;
        }
        sort(tmp.begin(), tmp.end(), greater<char>());
        cout << tmp << endl;
    }
}