#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
// NHDvovod
using namespace std;
typedef long long ll;

int A[100000], B[100000];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        memset(A, 0, sizeof(A));
        memset(B, 0, sizeof(B));
        set<int> se;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            A[a[i]]++;
            se.insert(a[i]);
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            B[b[i]]++;
            se.insert(b[i]);
        }
        int mi = 1e7, ma = -1;
        for (int x : se)
        {
            cout << x << " ";
            mi = min(x, mi);
            ma = max(ma, x);
        }
        cout << endl;
        for (int i = mi; i <= ma; i++)
            if (A[i] > 0 && B[i] > 0)
                cout << i << " ";
        cout << endl;
    }
}