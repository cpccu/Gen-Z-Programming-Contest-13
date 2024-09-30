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
    int n, k;
    cin >> n >> k;
    int count = 0;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < n - 2; i++){
        if(arr[i] >= arr[i + 1] && arr[i] > 0 && arr[i + 1] > 0) count++;
    }
    cout << count << endl;
}

int main(){
    optimize();
    solve();
    return 0;
}