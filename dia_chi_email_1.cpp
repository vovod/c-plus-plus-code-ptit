#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
string giam(string a)
{
    for (int i = 0; i < a.size(); i++)
    {
        a[i] = tolower((char)a[i]);
    }
    return a;
}
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    map<int, string> a;
    int dem = 0;
    string tmp = "";
    while (ss >> tmp)
    {
        a[dem] = tmp;
        dem++;
    }
    string s1 = "";
    s = giam(s);
    for (int i = 0; i < dem; i++)
    {
        if (i == dem - 1)
            cout << giam(a[i]);
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (dem != 1 && (i == 0 || s[i - 1] == ' '))
            s1 = s1 + s[i];
    }
    if (s1.size() >= 1)
        s1 = s1.substr(0, s1.size() - 1);
    cout << s1 << "@ptit.edu.vn";
}