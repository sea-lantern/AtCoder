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

    VI a(N), b(N);
    REP(i, N) cin >> a[i];
    
    for(ll i = N; i != 0; i--){
        ll cnt = 0;
        for(ll j = i; j <= N; j += i) if(b[j-1]) cnt += 1;
        if(cnt % 2 != a[i-1]) b[i-1] = 1;
    }

    VI ans;

    REP(i, N) {
        if(b[i]) ans.push_back(i+1);
    }

    OUT(ans.size());
    REP(i, ans.size()) cout << ans[i] << " ";
    cout << "\n";
}