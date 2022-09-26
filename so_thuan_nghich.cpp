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
        string n;
        cin >> n;
        cin.ignore();
        int dem = 0;
        for (int i = 0; i < n.size() / 2; i++)
        {
            if (n[i] != n[n.size() - i - 1])
                dem++;
        }
        if (dem == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}