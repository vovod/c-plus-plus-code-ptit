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
    int t;
    cin >> t;
    map<string, int> b;
    while (t--)
    {
        scanf("\n");
        string s;
        getline(cin, s);
        stringstream ss(s);
        string tmp = "";
        map<int, string> a;
        int dem = 0;
        while (ss >> tmp)
        {
            a[dem] = tmp;
            a[dem] = giam(a[dem]);
            dem++;
        }
        string key = "";
        key = key + a[dem - 1];
        for (int i = 0; i < dem - 1; i++)
        {
            key = key + (a[i])[0];
        }
        b[key]++;
        if (b[key] > 1)
            key = key + to_string(b[key]);
        cout << key << "@ptit.edu.vn" << endl;
    }
}
/*
4
    nGUYEn    quaNG   vInH
   tRan   thi THU    huOnG
   nGO   quoC  VINH
 lE            tuAn    aNH
*/
