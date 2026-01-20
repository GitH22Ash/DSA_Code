#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define print(a) cout << a << "\n"
#define printab(a,b) cout << a << " " << b << "\n"
#define readV(vec) for (auto &e: vec) cin >> e;
#define debug(vec) for (auto &e: vec) {cout << e << " ";} cout << "\n";
#define nl cout << "\n"
#define YES {cout << "YES" << "\n"; return;}
#define NO {cout << "NO" << "\n"; return;}
 
const int N = 100005;
 
void solve() {
    ll n, m, h;
    cin >> n >> m >> h;
    
    vector<ll> a(n); readV(a);
    vector<ll> b(m);
    vector<ll> c(m);
    
    for (int i=0; i<m; i++) {
        cin >> b[i] >> c[i];
    }
 
    vector<ll> cur(n, 0);
    vector<ll> last(n, -1);
    ll re = 0;
 
    for (int i = 0; i < m; i++) {
        ll bb = b[i] - 1;
        ll cc = c[i];
 
        if (last[bb] != re) {
            cur[bb] = a[bb];
            last[bb] = re;
        }
 
        cur[bb] += cc;
 
        if (cur[bb] > h) re++;
 
    }
 
    for (int i = 0; i < n; i++) {
        if (last[i] != re) {
            cout << a[i] << " ";
        } else {
            cout << cur[i] << " ";
        }
    }
    cout << "\n";
}
 
int main() {
    fastio;
    int t = 1;
    cin >> t;
    while (t--) solve();
}