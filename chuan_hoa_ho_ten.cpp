#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
string tang(string a)
{
    for (int i = 0; i < a.size(); i++)
    {
        a[i] = toupper((char)a[i]);
    }
    return a;
}
string giam(string a)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (i == 0)
            a[i] = toupper((char)a[i]);
        else
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
    for (int i = 0; i < dem; i++)
    {
        if (i == dem - 1)
            cout << ", " << tang(a[i]);
        else
            cout << giam(a[i]);
        if (i != dem - 1 && i != dem -2)
            cout << " ";
    }
}