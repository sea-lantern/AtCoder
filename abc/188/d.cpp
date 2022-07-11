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
    ll N, C;
    cin >> N >> C;

    vector<P> q(N*2);
    REP(i, N) {
        cin >> q[i].first >> q[i+N].first >> q[i].second;
        q[i+N].first += 1;
        q[i+N].second = -q[i].second;
    }

    sort(ALL(q));

    ll d = 0;
    ll c = 0;
    ll ans = 0;
    REP(i, N*2){
        if(d != q[i].first){
            ans += min(c, C) * (q[i].first - d);
            d = q[i].first;
        }
        c += q[i].second;
    }
    OUT(ans);
}