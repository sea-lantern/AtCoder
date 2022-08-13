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
    ll N;
    cin >> N;

    VI P(N);
    REP(i, N - 1) cin >> P[i+1];

    P[0] = 0;

    ll ind = P[N-1]-1;
    ll ans = 0;
    while(ind != 0) {
        ind = P[ind]-1;
        ans++;
    }
    
    OUT(ans+1);
}