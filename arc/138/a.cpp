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
    ll N, K;
    cin >> N >> K;

    VI A(N);

    REP(i, N) cin >> A[i];

    set<ll> st;
    map<ll, ll> mp;

    REP(i, K){
        st.insert(A[i]);
        mp[A[i]] = i;
    }

    ll m = 0;
    for(auto itr = st.begin(); itr != st.end(); itr++){
        if(mp[*itr] < m) mp[*itr] = m;
        m = mp[*itr];
    }

    st.insert(0);
    mp[0] = -1;

    ll ans = N;
    for(ll i = K; i < N; i++){
        ll n = mp[*--st.lower_bound(A[i])];
        if(n == -1) continue;
        ans = min(ans, i - n);
    }

    if(ans == N) OUT(-1);
    else OUT(ans);
}