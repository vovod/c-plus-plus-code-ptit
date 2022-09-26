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
        string s;
        cin >> s;
        int dem0 = 0;
        int dem1 = 0;
        int dem2 = 0;
        int dem3 = 0;
        int dem4 = 0;
        int dem5 = 0;
        int dem6 = 0;
        int dem7 = 0;
        int dem8 = 0;
        int dem9 = 0;
        int gan = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0' && i != 0)
                dem0++;
            else if (s[i] == '1')
                dem1++;
            else if (s[i] == '2')
                dem2++;
            else if (s[i] == '3')
                dem3++;
            else if (s[i] == '4')
                dem4++;
            else if (s[i] == '5')
                dem5++;
            else if (s[i] == '6')
                dem6++;
            else if (s[i] == '7')
                dem7++;
            else if (s[i] == '8')
                dem8++;
            else if (s[i] == '9')
                dem9++;
            else
            {
                gan = 1;
                break;
            }
        }
        if (gan == 1)
            cout << "INVALID" << endl;
        else if (dem0 == 0 || dem1 == 0 || dem2 == 0 || dem3 == 0 || dem4 == 0 || dem5 == 0 || dem6 == 0 || dem7 == 0 || dem8 == 0 || dem9 == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}