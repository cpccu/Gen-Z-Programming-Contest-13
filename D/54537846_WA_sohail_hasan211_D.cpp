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
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i  = 0; i < n; i++) cin >> arr[i];
    int val = arr[k - 1];
    int cnt = 0;
    for(int i = 0; i < n - 1; i++){
        if(arr[i] >= val && arr[i] > 0) cnt++;
    }
    cout << cnt << endl;
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