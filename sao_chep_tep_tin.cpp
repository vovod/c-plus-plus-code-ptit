#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
int main()
{
    ifstream fp1;
    ofstream fp2;
    fp1.open("PTIT.in");
    fp2.open("PTIT.out");
    while (!fp1.eof())
    {
        string s;
        getline(fp1, s);
        fp2 << s << endl;
    }
    fp2.close();
    fp1.close();
}