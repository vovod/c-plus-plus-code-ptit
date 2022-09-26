#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
struct NhanVien
{
    string ten;
    string gioitinh;
    string sinh1;
    string que;
    ll so;
    string ngay;
};
void nhap(NhanVien &a)
{
    getline(cin, a.ten);
    scanf("\n");
    getline(cin, a.gioitinh);
    scanf("\n");
    getline(cin, a.sinh1);
    scanf("\n");
    getline(cin, a.que);
    scanf("\n");
    cin >> a.so;
    scanf("\n");
    getline(cin, a.ngay);
    //scanf("\n");
}
void in(NhanVien a)
{
    cout << "00001 ";
    int dem = 0;
    cout << a.ten << " " << a.gioitinh << " ";
    for (int i = 0; i < a.sinh1.size(); i++)
    {
        if (a.sinh1[1] == '/' && i == 0)
            cout << "0";
        if (a.sinh1[3] == '/' && i == 2)
            cout << "0";
        if (a.sinh1[4] == '/' && i == 3 && a.sinh1[1] != '/')
            cout << "0";
        if (a.sinh1[i] == '/')
            dem++;
        cout << a.sinh1[i];
        if (dem == 2 && ((a.sinh1.size() - i) <= 4))
        {
            // cout << a.sinh1.size() - i;
            for (int j = 0; j <= (4 - (a.sinh1.size() - i)); j++)
            {
                cout << "0";
            }
            dem++;
        }
        else if (dem == 2 && ((a.sinh1.size() - i) > 4))
            dem++;
    }
    cout << " ";
    cout << a.que << " " << a.so << " ";
    int dem1=0;
    for (int i = 0; i < a.ngay.size(); i++)
    {
        if (a.ngay[1] == '/' && i == 0)
            cout << "0";
        if (a.ngay[3] == '/' && i == 2)
            cout << "0";
        if (a.ngay[4] == '/' && i == 3 && a.ngay[1] != '/')
            cout << "0";
        if (a.ngay[i] == '/')
            dem1++;
        cout << a.ngay[i];
        if (dem1 == 2 && ((a.ngay.size() - i) <= 4))
        {
            // cout << a.ngay.size() - i;
            for (int j = 0; j <= (4 - (a.ngay.size() - i)); j++)
            {
                cout << "0";
            }
            dem1++;
        }
        else if (dem1 == 2 && ((a.ngay.size() - i) > 4))
            dem1++;
    }
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
