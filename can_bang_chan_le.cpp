#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int kiemtra(int n)
{
    int chan = 0;
    int le = 0;
    while (n > 0)
    {
        if (((n % 10) % 2) == 0)
            chan++;
        else
            le++;
        n = n / 10;
    }
    //return chan;
    if (chan == le)
        return 1;
    else return 0;
}
int main()
{
    int n;
    cin >> n;
    int dem = 0;
    for (int i = (int)pow(10, n - 1); i < (int)pow(10, n); i++)
    {
        //cout << kiemtra(i) << " ";
        if (kiemtra(i) == 1)
        {
            cout << i << " ";
            dem++;
            if (dem % 10 == 0)
                cout << endl;
        }
    }
}