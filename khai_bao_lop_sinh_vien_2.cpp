#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
class SinhVien
{
public:
    string masv, hoten, lop, ngaysinh;
    float gpa;
    friend istream &operator>>(istream &in, SinhVien &p)
    {
        scanf("\n");
        getline(cin, p.hoten);
        in >> p.lop >> p.ngaysinh >> p.gpa;
        return in;
    }
    friend ostream &operator<<(ostream &out, SinhVien &p)
    {
        p.masv = "B20DCCN001";
        if (p.ngaysinh.length() == 9)
        {
            if (p.ngaysinh[2] != '/')
                p.ngaysinh.insert(0, "0");
            else
                p.ngaysinh.insert(3, "0");
        }
        else if (p.ngaysinh.length() == 8)
        {
            p.ngaysinh.insert(0, "0");
            p.ngaysinh.insert(3, "0");
        }
        out << p.masv << " " << p.hoten << " " << p.lop << " " << p.ngaysinh << fixed << setprecision(2) << " " << p.gpa;
        ;

        return out;
    }
};
int main()
{
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}