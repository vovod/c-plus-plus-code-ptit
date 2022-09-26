#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
struct PhanSo
{
    ll tu, mau;
};
void nhap(struct PhanSo &a)
{
    cin >> a.tu >> a.mau;
}
void rutgon(struct PhanSo &a)
{
    ll x = __gcd(a.tu, a.mau);
    a.tu = a.tu / x;
    a.mau = a.mau / x;
}
void in(struct PhanSo a)
{
    cout << a.tu << "/" << a.mau;
}
int main()
{
    struct PhanSo p;
    nhap(p);
    rutgon(p);
    in(p);
    return 0;
}