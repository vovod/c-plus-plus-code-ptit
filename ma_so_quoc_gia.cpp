#include <bits/stdc++.h>
//#include <iostream>
//#include <map>
//#include <vector>
//NHDvovod
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin >>t;
    while (t--)
    {
        string s;
        cin >> s;
        for(int i = 0; i < s.size();i++){
            if(s[i]=='0'&&s[i+1]=='8'&&s[i+2]=='4'){
                i = i+2;
            }
            else cout << s[i];
        }
        cout<<endl;
    }
}