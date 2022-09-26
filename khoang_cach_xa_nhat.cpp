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
        int a[n];
        vector<int> v;
        for (int &x : a)
        {
            cin >> x;
            v.push_back(x);
        }
        vector<int> maxFromEnd(n + 1, INT_MIN);
        for (int i = v.size() - 1; i >= 0; i--)
            maxFromEnd[i] = max(maxFromEnd[i + 1], v[i]);
        int result = 0;
        for (int i = 0; i < v.size(); i++)
        {
            int low = i + 1, high = v.size() - 1, ans = i;
            while (low <= high)
            {
                int mid = (low + high) / 2;
                if (v[i] <= maxFromEnd[mid])
                {
                    ans = max(ans, mid);
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }
            result = max(result, ans - i);
        }
        cout << result << endl;
    }
}