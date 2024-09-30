// By the name of ALLAH
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define rep(i, n) for(int i = 1; i <= n; i++)
#define loop(i, n) for(int i = 0; i < n; i++)
#define mod 1000000007
#define ll long long int
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int dx[] = {-1, 1, 0, 0, -1, -1, 1, 1};// top-bottom-left-right
int dy[] = {0, 0, -1, 1, -1, 1, -1, 1};
const double PI = 3.141592653589793238460;

void solve(){
    // solve your problem
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;

    for (auto& x : s1) { 
        x = tolower(x); 
    }
    
    for (auto& x : s2) { 
        x = tolower(x); 
    }

    if(s1 > s2){
        cout << 1 << endl;
    }else if(s1 == s2){
        cout << 0 << endl;
    }else{
        cout << -1 << endl;
    }
}

int main(){
    optimize();
    // your code here

    long long int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }

    return 0;
}