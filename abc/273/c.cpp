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
    ll N;
    cin >> N;

    VI A(N), ans(N);
    set<ll> st;
    REP(i, N) {
        cin >> A[i];
        st.insert(A[i]);
    }

    VI B(st.size());

    auto itr = st.begin();
    REP(i, st.size()) {
        B[i] = *itr;
        itr++;
    }

    REP(i, N) {
        ll k = upper_bound(ALL(B), A[i]) - B.begin();
        ans[B.size() - k] += 1;
    }
    
    REP(i, N) OUT(ans[i]);
}