#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
//NHDvovod
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int dem = 0;
        for (int i = 0; i < s.size(); i++)
        {
            for (int j = i; j < s.size(); j++)
            {
                if (s[i] == s[j])
                    dem++;
            }     
        }
        cout << dem << endl;
    }
}