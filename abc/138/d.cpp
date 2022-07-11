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

VI cnt(200010);
VVI way(200010);

void dfs(ll c, ll p = -1) {
    for(auto w: way[c]) if(p != w) {
        dfs(w, c);
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    ll N, Q;
    cin >> N >> Q;

    REP(i, N - 1) {
        ll a, b;
        cin >> a >> b;
        way[a-1].push_back(b-1);
        way[b-1].push_back(a-1);
    }

    REP(i, Q) {
        ll p, x;
        cin >> p >> x;
        cnt[p-1] += x;
    }

    dfs(0);

    REP(i, N) cout << cnt[i] << " ";
    cout << "\n";
}