#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin.ignore();
        string a;
        getline(cin, a);
        set<char> s;
        int k;
        cin >> k;
        for (char x : a)
        {
            s.insert(x);
        }
        if (26 - s.size() <= k)
            cout << "1\n";
        else
            cout << "0\n";
    }
}