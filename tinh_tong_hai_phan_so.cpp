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

ll bcnn(ll a, ll b)
{
    return a * b / (__gcd(a, b));
}

PhanSo tong(struct PhanSo a, struct PhanSo b)
{
    PhanSo r;
    r.mau = bcnn(a.mau,b.mau);
    r.tu = (bcnn(a.mau,b.mau)/a.mau)*a.tu+(bcnn(a.mau,b.mau)/b.mau)*b.tu;
    ll x = __gcd(r.tu, r.mau);
    r.mau = r.mau/x;
    r.tu = r.tu/x;
    return r;
}
void in(struct PhanSo a)
{
    cout << a.tu << "/" << a.mau;
}
int main()
{
    struct PhanSo p, q;
    nhap(p);
    nhap(q);
    PhanSo t = tong(p, q);
    in(t);
    return 0;
}