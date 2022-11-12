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
    ll N, M;
    cin >> N >> M;

    VI A(N);
    map<ll, ll> mp;
    ll m = 0;

    REP(i, N) {
        cin >> A[i];
        m += A[i];
        mp[A[i]] += 1;
    }

    sort(ALL(A));

    ll ans = 0;

    ll i = 0;
    while (i < M) {
        auto itr = lower_bound(ALL(A), i);
        if(itr == A.end()) break;
        i = *itr;
        ll ini = i;
        ll sum = 0;
        while(mp[i % M] != 0 and i != ini + M) {
            sum += mp[i % M] * (i % M);
            i += 1;
        }
        ans = max(ans, sum);
    }

    OUT(m - ans);
}