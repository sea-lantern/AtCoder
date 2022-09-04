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
    ll N, M, T;
    cin >> N >> M >> T;

    VI A(N-1);
    REP(i, N-1) cin >> A[i];

    VI XY(N);
    REP(_, M) {
        ll x, y;
        cin >> x >> y;
        XY[x-1] = y;
    }

    REP(i, N-1) {
        T -= A[i];
        if(T <= 0) {
            OUT("No");
            return 0;
        }
        T += XY[i+1];
    }
    
    OUT("Yes");
}