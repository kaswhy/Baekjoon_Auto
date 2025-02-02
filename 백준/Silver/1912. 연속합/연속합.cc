#include <bits/stdc++.h>
using namespace std;

int a[100001];
int dp[100001];

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    
    int n;
    cin >> n;
    
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    
    int ans = INT_MIN;
    for(int i = 0; i<n; i++){
        dp[i] = max(a[i], dp[i-1] + a[i]);
        ans = max(ans, dp[i]);
    }
    
    cout << ans;
}