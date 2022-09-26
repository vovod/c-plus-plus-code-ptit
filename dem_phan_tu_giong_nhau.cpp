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
        cin >> n;
        int a[105][105];
        map<int, int> b;
        int dem = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                if (b[a[i][j]] == i)
                    b[a[i][j]]++;
                if (b[a[i][j]] == n){
                    dem++;
                    b[a[i][j]] = 0;
                }
            }
        }
        cout << dem << endl;
    }
}