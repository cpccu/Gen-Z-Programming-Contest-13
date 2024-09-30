// By the name of ALLAH
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define rep(i, n) for(int i = 1; i <= n; i++)
#define loop(i, n) for(int i = 0; i < n; i++)
#define mod 1000000007
#define ll long long int
int dx[] = {-1, 1, 0, 0, -1, -1, 1, 1};// top-bottom-left-right
int dy[] = {0, 0, -1, 1, -1, 1, -1, 1};
const double PI = 3.141592653589793238460;

void solve(){
    // solve your problem
    string s;
    cin >> s;
    // vector<char> v;
    // for(int i = 0; i < s.size(); i++){
    //     if(i % 2 == 0) v.push_back(s[i]);
    // }
    // sort(v.begin(), v.end());
    // string res = "";
    // for(int i = 0; i < v.size(); i++){
    //     res += v[i];
    //     res += '+';
    // }
    // res.pop_back();
    // cout << res << endl;
    string res = "";
    char c = toupper(s[0]);
    res += c;
    for(int i = 1; i < s.size(); i++) res += s[i];
    cout << res << endl;

}

int main(){
    optimize();
    solve();
    return 0;
}