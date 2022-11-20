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

    ll i = 0;
    ll l = 1;

    while(l < L) {
        l += A[i] + 1;
        i++;
    }

    while(i < N) {
        if(A[i] == 2) {
            OUT("No");
            return 0;
        }
        i++;
    }

    OUT("Yes");
}