#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
struct ThiSinh
{
    string ten;
    string sinh;
    double diem1, diem2, diem3;
};
void nhap(ThiSinh &a)
{
    getline(cin, a.ten);
    scanf("\n");
    getline(cin, a.sinh);
    cin >> a.diem1 >> a.diem2 >> a.diem3;
}
void in(ThiSinh a)
{
    double x = a.diem1 + a.diem2 + a.diem3;
    cout << a.ten << " " << a.sinh << " ";
    cout << fixed << setprecision(1) << x;
}
int main()
{
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}


