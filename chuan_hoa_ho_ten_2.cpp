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
        if (i == 0)
            a[i] = toupper((char)a[i]);
        else
            a[i] = tolower((char)a[i]);
    }
    return a;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
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
            dem++;
        }
        for (int i = 0; i < dem; i++)
        {
            a[i] = giam(a[i]);
        }
        if (n == 1)
        {
            cout << a[dem - 1] << " ";
            for (int i = 0; i < dem - 1; i++)
            {
                cout << a[i] << " ";
            }
        }
        else
        {
            for (int i = 1; i < dem; i++)
            {
                cout << a[i] << " ";
            }
            cout << a[0];
        }
        cout << endl;
    }
}
/*
2
1
NguyeN    vAn    Nam
2
hoAng  le Nhat THONG chi
*/
