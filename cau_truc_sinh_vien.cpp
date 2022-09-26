#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
struct SinhVien
{
    string ten;
    string sinh;
    string sinh1;
    double diem1;
};
void nhap(SinhVien &a)
{
    getline(cin, a.ten);
    scanf("\n");
    getline(cin, a.sinh);
    scanf("\n");
    getline(cin, a.sinh1);
    cin >> a.diem1;
}
void in(SinhVien a)
{
    cout << "B20DCCN001 ";
    double x = a.diem1;
    int dem = 0;
    cout << a.ten << " " << a.sinh << " ";
    for (int i = 0; i < a.sinh1.size(); i++)
    {
        if (a.sinh1[1] == '/' && i == 0)
            cout << "0";
        if (a.sinh1[3] == '/' && i == 2)
            cout << "0";
        if (a.sinh1[4] == '/' && i == 3 && a.sinh1[1]!='/')
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
    cout << fixed << setprecision(2) << x;
}
int main()
{
    struct SinhVien A;
    nhap(A);
    in(A);
    return 0;
}
