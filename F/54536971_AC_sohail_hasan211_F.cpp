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
    int arr[5][5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> arr[i][j];
        }
    }
    int r = 0;
    int c = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(arr[i][j] == 1){
                r = i + 1;
                c = j + 1;
                break;
            }
        }
    }
    int count = 0;
    if(r == 4){
        r = 2;
    }
    if(r == 5) r = 1;
    if(c == 4) c = 2;
    if(c == 5) c = 1;

    cout << (3 - r) + (3 - c) << endl;
}

int main(){
    optimize();
    solve();
    return 0;
}