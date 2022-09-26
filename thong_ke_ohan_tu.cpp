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
    getline(cin, s);
    s = s + " ";
    map<string, int> a;
    string tmp = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
        {
            tmp = tmp + s[i];
        }
        else
        {
            a[tmp]++;
            tmp = "";
        }
    }
    tmp = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
        {
            tmp = tmp + s[i];
        }
        else
        {
            if (a[tmp] > 0 && tmp != "")
            {
                cout << tmp << " " << a[tmp] << endl;
                a[tmp] = 0;
            }
            tmp = "";
        }
    }
}