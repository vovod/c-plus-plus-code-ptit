#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
//NHDvovod
using namespace std;
typedef long long ll;
int main(){
    ll x;
    cin >> x;
    ll sum = 0;
    ll tmp = 1;
    for(ll i = 1; i<=x; i++){
        tmp = 1;
        for(ll j = 1; j<=i;j++){
            tmp = tmp * j;
        }
        sum = sum+tmp;
    }
    cout << sum;
}