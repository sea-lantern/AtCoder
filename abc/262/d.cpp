#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
typedef vector<ll> VI;
typedef vector<VI> VVI;
#define REP(i,n) for(ll i=0;i<(n);i++)
#define ALL(v) v.begin(),v.end()
#define OUT(n) cout << n << "\n"
constexpr ll MOD=998244353;
//constexpr ll MOD=1000000007;
//constexpr ll INF=2e18;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    ll N;
    cin >> N;

    VI A(N);
    REP(i, N) cin >> A[i];

    ll ans = N;

    for(ll i = 2; i <= N; i++) {
        VVI c(i, VI(i));
        REP(j, N) c[0][A[j] % i]++;

        REP(j, i - 1) REP(k, i) c[j+1][(k + k) % i] += c[j][k];

        OUT(c[0][0]);

        ans %= MOD;
    }
    
    OUT("");
}