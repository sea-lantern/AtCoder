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
    ll N, D, K;
    cin >> N >> D >> K;

    vector<P> LR(D);
    REP(i, D) cin >> LR[i].first >> LR[i].second;

    vector<P> ST(K);
    REP(i, K) cin >> ST[i].first >> ST[i].second;

    vector<P> SLR(K);
    REP(i, K) SLR[i].first = SLR[i].second = ST[i].first;

    VI ans(K);
    REP(i, D) REP(j, K){
        if(ans[j]) continue;
        if(SLR[j].second < LR[i].first || LR[i].second < SLR[j].first) continue;
        SLR[j].first = min(SLR[j].first, LR[i].first);
        SLR[j].second = max(SLR[j].second, LR[i].second);

        if(SLR[j].first <= ST[j].second && ST[j].second <= SLR[j].second) ans[j] = i + 1;
    }
    
    REP(i, K) OUT(ans[i]);
}