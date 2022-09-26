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
        string s1, s2;
        map<int, string> a, b;
        getline(cin, s1);
        scanf("\n");
        getline(cin, s2);
        string tmp = "";
        int dem = 0;
        stringstream ss1(s1);
        stringstream ss2(s2);
        while (ss1 >> tmp)
        {
            a[dem] = tmp;
            dem++;
        }
        int dem1 = 0;
        while (ss2 >> tmp)
        {
            b[dem1] = tmp;
            dem1++;
        }
        for (int i = 0; i < dem; i++)
        {
            for (int j = i+1; j < dem; j++){
                if(a[i]>a[j]){
                    string c = a[i];
                    a[i] = a[j];
                    a[j] = c;
                }
            }
            
        }
        for (int i = 0; i < dem; i++)
        {
            for (int j = i+1; j < dem; j++){
                if(a[i]==a[j]) a[j]="";
            }
            
        }
        for (int i = 0; i < dem; i++)
        {
            int dem2 = 0;
            if(a[i]=="") continue;
            for (int j = 0; j < dem1; j++)
            {
                if (a[i] == b[j])
                    dem2++;
            }
            if (dem2 == 0)
                cout << a[i] << " ";
        }
        cout << endl;
    }
}

