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
    ll N, X, Y;
    cin >> N >> X >> Y;

    X--; Y--;

    VI cnt(N-1);
    REP(i, N - 1) for(ll j = i + 1; j < N; j++){
        ll mn = min(j - i, abs(X-i) + abs(Y-j) + 1);
        cnt[--mn]++;
    }
    
    REP(i, N - 1) OUT(cnt[i]);
}