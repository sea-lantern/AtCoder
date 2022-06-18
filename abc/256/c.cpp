#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
typedef vector<ll> VI;
typedef vector<VI> VVI;
#define REP(i,n) for(ll i=0;i<(n);i++)
#define ALL(v) v.begin(),v.end()
#define OUT(n) cout << n << "\n"
//constexpr ll MOD=998244353;
//constexpr ll MOD=1000000007;
//constexpr ll INF=2e18;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int h1, h2, h3, w1, w2, w3;
    cin >> h1 >> h2 >> h3 >> w1 >> w2 >> w3;

    ll ans = 0;

    REP(v00, 28) REP(v01, 28) REP(v10, 28) REP(v11, 28) {
        int v02 = h1 - (v00 + v01 + 2);
        int v12 = h2 - (v10 + v11 + 2);
        int v22_1 = w3 - (v02 + v12);
        int v20 = w1 - (v00 + v10 + 2);
        int v21 = w2 - (v01 + v11 + 2);
        int v22_2 = h3 - (v20 + v21);

        if(v22_1 != v22_2) continue;
        if(v02 < 1 || 28 < v02) continue;
        if(v12 < 1 || 28 < v12) continue;
        if(v20 < 1 || 28 < v20) continue;
        if(v21 < 1 || 28 < v21) continue;
        if(v22_1 < 1 || 28 < v22_1) continue;

        ans += 1;

    } 
    
    OUT(ans);
}