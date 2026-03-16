#include <bits/stdc++.h>

using namespace std;
using ll = long long;
void solve() {
    int n;
    ll sum = 0;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i], sum += a[i];
    ll p = sum > 0 ? (sum + n - 1) / n : sum / n, chg = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] < p)
            chg += p - a[i];
    }
    cout << chg << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}