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
    ll N, M;
    cin >> N >> M;

    VVI d(N);

    REP(i, M){
        ll a, b;
        cin >> a >> b;
        d[a-1].push_back(b-1);
        d[b-1].push_back(a-1);
    }

    ll Q;
    cin >> Q;
    REP(_, Q){
        ll ans = 0;
        ll x, k;
        cin >> x >> k;
        x -= 1;
        VI f(N, 0);
        f[x] = 1;
        ans += x + 1;
        if(0 < k){
            for(auto x1: d[x]){
                if(f[x1] == 1) continue;
                f[x1] = 1;
                ans += x1 + 1;
                if(1 < k){
                    for(auto x2: d[x1]){
                        if(f[x2] == 1) continue;
                        f[x2] = 1;
                        ans += x2 + 1;
                        if(2 < k){
                            for(auto x3: d[x2]){
                                if(f[x3] == 1) continue;
                                f[x3] = 1;
                                ans += x3 + 1;
                            }
                        }
                    }
                }
            }
        }
        OUT(ans);
    }
}