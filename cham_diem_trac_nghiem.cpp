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
    cin.ignore();
    while (t--)
    {
        int n;
        cin >> n;
        double dem = 10.0;
        string de1 = " A B B A D C C A B D C C A B D";
        string de2 = " A C C A B C D D B B C D D B B";
        string in;
        getline(std::cin, in);
        if (n == 101)
        {
            for (int i = 0; i < de1.size(); i++)
            {
                if (in[i] != de1[i])
                    dem = dem - 2.0 / 3;
            }
        }
        else
        {
            for (int i = 0; i < de1.size(); i++)
            {
                if (in[i] != de2[i])
                    dem = dem - 2.0 / 3;
            }
        }
        cout << fixed << setprecision(2) << dem << endl;
    }
}