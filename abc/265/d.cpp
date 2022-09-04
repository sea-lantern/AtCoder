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
    ll N, P, Q, R;
    cin >> N >> P >> Q >> R;

    VI A(N+1);
    REP(i, N) {
        cin >> A[i+1];
        A[i+1] += A[i];
    }

    REP(i, N) {
        ll o = P + A[i];
        auto itr = lower_bound(A.begin() + i, A.end(), o);
        if(itr >= A.end() || *itr != o) continue;
        o = Q + *itr;
        itr = lower_bound(itr + 1, A.end(), o);
        if(itr >= A.end() || *itr != o) continue;
        o = R + *itr;
        itr = lower_bound(itr + 1, A.end(), o);
        if(itr >= A.end() || *itr != o) continue;
        OUT("Yes");
        return 0;
    }
    
    OUT("No");
}