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

    ll ans = 0;

    VI k(N*N + 1);
    k[0] = 1;
    for(ll i = 1; i <= N * N; i++){
        k[i] = k[i-1] * i;
        k[i] %= MOD;
    }

    for(ll i = N; i <= N * N - N + 1; i++){
        ll c = 1;
        REP(j, N-1){
            c *= i - j - 1;
            c %= MOD;
            c *= N * N - i - j;
            c %= MOD;
        }
        ans += c;
        ans %= MOD;
    }

    ans *= N;
    ans %= MOD;
    ans *= N;
    ans %= MOD;
    ans *= k[N * N - 2 * N + 1];
    ans %= MOD;

    ans = k[N*N] - ans + MOD;
    ans %= MOD;
    
    OUT(ans);
}