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
    int a, b;
    cin >> a >> b;
    if(a < b){
        int x = a * (b / 2);
        int y = a / 2 * b;
        cout << max(x, y) << endl;
    }else if(a == b){
        if(a & 1){
            int r = (a * (a / 2)) + a / 2;
            cout << r << endl;

        }else{
            cout << (a * (a / 2)) << endl;
        }
    }else{
        int x = b * (a / 2);
        int y = (b / 2) * a;
        cout << max(x, y) << endl;
        // cout << (a / 2) * b << endl;
    }
}

int main(){
    optimize();
    solve();
    return 0;
}