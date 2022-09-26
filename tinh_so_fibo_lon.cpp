#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
//NHDvovod
using namespace std;
typedef long long ll;
long long s=1000000007;
long long F(int n)
{
    long long a1 = 1, a2 = 1;
    if (n == 1 || n == 2)
        return 1;
    long long i = 3, a;
    while (i <= n)
    {
        a = (a1 + a2)%s;
        a1 = a2%s;
        a2 = a%s;
        i++;
    }
    return a%s;
}

int main()
{
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    cout << F(n) << endl;
    }
}

