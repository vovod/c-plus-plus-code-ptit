#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int solve(int a[], int n, int l, int r)
{
    int dem =0;
    for(int i =l+1;i<=r-1;i++){
        if(a[i]<a[i+1]&&a[i]<a[i-1]) dem=1;
    }
    if(dem == 0) return 1;
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 5];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int l, r;
        cin >> l >> r;
        if(solve(a, n, l, r)==1) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}