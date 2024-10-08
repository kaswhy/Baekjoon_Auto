#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    priority_queue<long long int> pq;

    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        int x;
        cin >> x;
        if(x==0){
            if(pq.empty()){
                cout << 0 << "\n";
                continue;
            }
            cout << pq.top() << "\n";
            pq.pop();
            continue;
        }
        pq.push(x);
    }
}