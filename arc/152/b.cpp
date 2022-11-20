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
    ll N, L;
    cin >> N >> L;

    VI A(N);
    REP(i, N) cin >> A[i];

    sort(ALL(A));

    ll ans = 4 * L;

    REP(i, N) {
        ll x = L - A[i];
        auto itr = lower_bound(ALL(A), x);
        ll dt = L * 2;
        if(itr != A.end()) {
            dt = min(abs(x - *itr), dt);
        }
        if(itr != A.begin()) {
            --itr;
            dt = min(abs(x - *itr), dt);
        }

        ans = min(2 * L + dt * 2, ans);
    }

    OUT(ans);
}