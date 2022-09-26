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
        scanf("\n");
        string s;
        getline(cin, s);
        int dem = 0;
        int dem1 = 0;
        for (int i = 5; i < s.size(); i++)
        {
            if (s[5] == s[6] && s[5] == s[7] && s[9] == s[10])
                dem++;
            if (s[5] < s[6] && s[6] < s[7] && s[7] < s[9] && s[9] < s[10])
                dem++;
            if (s[i] == '6' || s[i] == '8')
                dem1++;
            if (dem1 == 5)
                dem++;
        }
        if (dem != 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
/*7
29T1–123.45
29T1–555.55
29T1–222.33
29T1–686.88
29T1–123.33
29T1–555.54
29T1–606.88*/