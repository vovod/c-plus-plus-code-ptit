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
    scanf("\n");
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
    // scanf("\n");
}
void inds(NhanVien a[], int n)
{
    int dem = 1;
    for (int i = 0; i < n; i++)
    {
        printf("%05d ", dem);
        dem++;
        int dem = 0;
        cout << a[i].ten << " " << a[i].gioitinh << " " << a[i].sinh1 << " " << a[i].que << " " << a[i].so << " " << a[i].ngay;
        cout << endl;
    }
}
int main()
{
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        nhap(ds[i]);
    inds(ds, N);
    return 0;
}
/*
3
Nguyen Van A
Nam
10/22/1982
Mo Lao-Ha Dong-Ha Noi
8333012345
31/12/2013
Ly Thi B
Nu
10/15/1988
Mo Lao-Ha Dong-Ha Noi
8333012346
22/08/2011
Hoang Thi C
Nu
04/02/1981
Mo Lao-Ha Dong-Ha Noi
8333012347
22/08/2011
*/
