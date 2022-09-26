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
    // scanf("\n");
    while (t--)
    {
        scanf("\n");
        string s;
        getline(cin, s);
        int dem = 0;
        for (int i = 1; i < s.size(); i++)
        {
            if ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i - 1] != ' ' && s[i - 1] != '\n' && s[i - 1] != '\t')
                dem++;
        }
        cout << dem + 1 << endl;
    }
}
