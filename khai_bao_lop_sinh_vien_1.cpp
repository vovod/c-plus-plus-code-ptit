#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
class SinhVien
{
private:
    string ten, sinh, sinh1;
    double diem1;

public:
    void nhap()
    {
        getline(cin, this->ten);
        scanf("\n");
        getline(cin, this->sinh);
        scanf("\n");
        getline(cin, this->sinh1);
        cin >> this->diem1;
    }
    void xuat()
    {
        cout << "B20DCCN001 ";
        double x = this->diem1;
        int dem = 0;
        cout << this->ten << " " << this->sinh << " ";
        for (int i = 0; i < this->sinh1.size(); i++)
        {
            if (this->sinh1[1] == '/' && i == 0)
                cout << "0";
            if (this->sinh1[3] == '/' && i == 2)
                cout << "0";
            if (this->sinh1[4] == '/' && i == 3 && this->sinh1[1] != '/')
                cout << "0";
            if (this->sinh1[i] == '/')
                dem++;
            cout << this->sinh1[i];
            if (dem == 2 && ((this->sinh1.size() - i) <= 4))
            {
                // cout << a.sinh1.size() - i;
                for (int j = 0; j <= (4 - (this->sinh1.size() - i)); j++)
                {
                    cout << "0";
                }
                dem++;
            }
            else if (dem == 2 && ((this->sinh1.size() - i) > 4))
                dem++;
        }
        cout << " ";
        cout << fixed << setprecision(2) << x;
    }
};
int main()
{
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}