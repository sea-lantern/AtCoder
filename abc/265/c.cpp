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
    ll H, W;
    cin >> H >> W;

    vector<string> G(H);
    REP(i, H) cin >> G[i];

    VVI used(H, VI(W));

    ll x = 0, y = 0;
    while(1) {
        if(used[y][x]) {
            OUT(-1);
            return 0;
        }

        used[y][x] = 1;
        ll end = 0;
        if (G[y][x] == 'U') {
            if(y == 0) end = 1;
            else y -= 1;
        } else if (G[y][x] == 'D') {
            if(y == H-1) end = 1;
            else y += 1;
        } else if (G[y][x] == 'L') {
            if(x == 0) end = 1;
            else x -= 1;
        } else if (G[y][x] == 'R') {
            if(x == W-1) end = 1;
            else x += 1;
        }
        if(end) {
            OUT(y+1 << " " << x+1);
            return 0;
        }
    }
}