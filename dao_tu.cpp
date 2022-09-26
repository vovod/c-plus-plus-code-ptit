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
        scanf("\n");
        string s;
        string tmp = "";
        getline(cin, s);
        stringstream ss(s);
        //scanf("\n");
        int dem = 0;
        map<int, string> a;
        while (ss >> tmp)
        {
            a[dem] = tmp;
            dem++;
        }
        for (int i = dem - 1; i >= 0; i--)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}
