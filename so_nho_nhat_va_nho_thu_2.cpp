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
        int n;
        vector<int> a;
        cin >> n;
        int dem = 0;
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            a.push_back(tmp);
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            if (a[i] > a[0])
            {
                cout << a[0] << " " << a[i] << endl;
                dem = 1;
                break;
            }
        }
        if (dem == 0)
            cout << "-1" << endl;
    }
}