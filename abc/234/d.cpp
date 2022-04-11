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
    int N, K;
    cin >> N >> K;

    VI p(N);
    REP(i, N) cin >> p[i];

    set<int> st;
    REP(i, K){
        st.insert(p[i]);
    }
    for(int i = K; i < N; i++){
        OUT(*st.begin());
        st.insert(p[i]);
        st.erase(st.begin());
    }
    OUT(*st.begin());
}