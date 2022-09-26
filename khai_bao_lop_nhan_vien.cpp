#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
class NhanVien
{
private:
    string ho_ten;
    string gt;
    string ng_sinh, d_chi, ma_so, ng_ki;

public:
    NhanVien()
    {
        ho_ten = gt = ng_sinh = d_chi = ma_so = ng_ki = " ";
    }
    void nhap()
    {
        getline(cin, ho_ten);
        scanf(" ");
        cin >> gt >> ng_sinh;
        scanf(" ");
        getline(cin, d_chi);
        scanf(" ");
        cin >> ma_so >> ng_ki;
    }
    void xuat()
    {
        cout << "00001"
             << " " << ho_ten << " " << gt << " " << ng_sinh << " "
             << d_chi << " " << ma_so << " " << ng_ki;
    }
};

int main()
{
    NhanVien a;
    a.nhap();
    a.xuat();
    return 0;
}