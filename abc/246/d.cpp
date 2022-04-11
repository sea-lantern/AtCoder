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
    ll N;
    cin >> N;

    ll n = 0;
    while(4 * n * n * n <= N) n += 1;

    OUT(n);

    ll ans = INF;
    for(ll a = 0; a < n; a++){
        for(ll b = n - 1; b <= n; b++){
            ll k = a*a*a + a*a*b + a*b*b + b*b*b;
            if(N <= k) ans = min(ans, k);
        }
    }
    
    OUT(ans);
}