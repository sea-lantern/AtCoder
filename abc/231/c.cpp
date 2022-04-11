#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
typedef vector<ll> VI;
typedef vector<VI> VVI;
#define REP(i,n) for(ll i=0;i<(n);i++)
#define ALL(v) v.begin(),v.end()
#define OUT(n) cout << (n) << "\n"
//constexpr ll MOD=998244353;
//constexpr ll MOD=1000000007;
//constexpr ll INF=2e18;

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
    ll N, Q;
    cin >> N >> Q;
    
    VI A(N);
    REP(i, N) cin >> A[i];

    sort(ALL(A));

    REP(i, Q){
        ll x;
        cin >> x;
        auto ans = lower_bound(ALL(A), x);
        OUT(A.end() - ans);
    }
}