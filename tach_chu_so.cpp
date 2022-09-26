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
        cin >> s;
        vector<char> a;
        int dem = 0;
        int sum = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                a.push_back(s[i]);
                dem++;
            }
            else
                sum = sum + (int)(s[i] - '0');
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < dem; i++)
        {
            cout << a[i];
        }
        cout << sum << endl;
    }
}