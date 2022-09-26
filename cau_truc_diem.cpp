#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
// NHDvovod
using namespace std;
typedef long long ll;
struct Point
{
    double x, y;
};
// double a = sqrt((diem1.x - diem2.x) * (diem1.x - diem2.x) + (diem1.y - diem2.y) * (diem1.y - diem2.y));
void input(Point& a)
{
    cin >> a.x >> a.y;
}
double distance(Point diem1, Point diem2)
{
    double a = sqrt((diem1.x - diem2.x) * (diem1.x - diem2.x) + (diem1.y - diem2.y) * (diem1.y - diem2.y));
    return a;
}
int main()
{
    struct Point A, B;
    int t;
    cin >> t;
    while (t--)
    {
        input(A);
        input(B);
        //cout << A.x << endl;
        cout << fixed << setprecision(4) << distance(A, B) << endl;
    }
    return 0;
}