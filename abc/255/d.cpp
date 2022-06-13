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
    ll N, Q;
    cin >> N >> Q;

    VI A(N);
    REP(i, N) cin >> A[i];

    sort(ALL(A));
    
    VI S(N+1);
    REP(i, N) S[i+1] = A[i] + S[i];

    while(Q--){
        ll X;
        cin >> X;

        ll l = lower_bound(ALL(A), X) - A.begin() - 1;
        ll r = lower_bound(ALL(A), X + 1) - A.begin();

        OUT(X * (l + 1) - S[l + 1] - X * (N - r) + S[N] - S[r]);
    }
}