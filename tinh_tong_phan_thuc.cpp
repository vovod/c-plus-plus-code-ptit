#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
//NHDvovod
using namespace std;
typedef long long ll;
int main(){
    double x;
    cin >> x;
    double sum = 1;
    for(double i = 2; i<=x;i++){
        sum = 1.0/i + sum;
    }
    cout << fixed << setprecision(4) << sum;
}