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
    ll N, K;
    cin >> N >> K;

    VI P(N);
    REP(i, N) cin >> P[i];

    VVI b(N+10, VI(2));
    VI sf;
    VI ans(N, -1);

    REP(i, N) {
        auto itr = lower_bound(ALL(sf), P[i]);
        if(itr == sf.end()) {
            b[P[i]][1] = 1;
            if(b[P[i]][1] == K) {
                ans[P[i]-1] = i + 1;
            } else {
                sf.push_back(P[i]);
            }
        } else {
            b[P[i]][1] = b[*itr][1] + 1;
            b[P[i]][0] = *itr;
            *itr = P[i];
            if(b[P[i]][1] == K) {
                ll p = P[i];
                while(b[p][1] != 0){
                    ans[p-1] = i + 1;
                    p = b[p][0];
                }
                sf.erase(itr);
            }

        }
        
    }

    REP(i, N) OUT(ans[i]);
}