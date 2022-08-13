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
constexpr ll INF=2e18;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    ll N, L, R;
    cin >> N >> L >> R;

    VI A(N), B(N);
    REP(i, N) {
        cin >> A[i];
        B[i] = A[i];
    }

    VI An(N+1);
    REP(i, N) An[i+1] = An[i] + A[i];

    ll mi = -1, mx = 0;
    REP(i, N) {
        if(mx < An[i+1] - (i+1) * L) {
            mx = An[i+1] - (i+1) * L;
            mi = i;
        }
    }

    REP(i, mi+1) {
        A[i] = L;
    }

    REP(i, N) An[i + 1] = An[i] + A[i];

    mx = 0;
    REP(i, N - mi - 1) {
        mx = max(mx, An[N] - An[N-i-1] - (i+1) * R);
    }

    ll ans = An[N] - mx;

    REP(i, N) An[i+1] = An[i] + B[i];

    mi = -1;
    mx = 0;
    REP(i, N) {
        if(mx < An[N] - An[N-i-1] - (i+1) * R) {
            mx = An[N] - An[N-i-1] - (i+1) * R;
            mi = i;
        }
    }

    REP(i, mi+1) {
        B[N-1-i] = R;
    }

    REP(i, N) An[i + 1] = An[i] + A[i];

    mx = 0;
    REP(i, N - mi - 1) {
        mx = max(mx, An[i+1] - (i+1) * L);
    }

    ans = min(ans, An[N] - mx);
    OUT(ans);
}