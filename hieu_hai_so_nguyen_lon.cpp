#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
// NHDvovod
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string a, b;
        cin >> a >> b;
        string hieu = "";
        while (a.size() < b.size())
            a = "0" + a;
        while (a.size() > b.size())
            b = "0" + b;
        if (a < b)
            swap(a, b);
        int nho = 0;
        for (int i = a.length() - 1; i >= 0; i--)
        {
            int t = (a[i] - '0') - (b[i] - '0') - nho;
            if (t < 0)
            {
                t += 10;
                nho = 1;
                hieu = (char)('0' + t) + hieu;
            }
            else
            {
                hieu = (char)('0' + t) + hieu;
                nho = 0;
            }
        }
        cout << hieu << endl;
    }
}