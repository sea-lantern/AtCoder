#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
typedef vector<ll> VI;
typedef vector<VI> VVI;
#define REP(i,n) for(ll i=0;i<(n);i++)
#define ALL(v) v.begin(),v.end()
#define OUT(n) cout << n << "\n"
constexpr ll MOD=998244353;
//constexpr ll MOD=1000000007;
//constexpr ll INF=2e18;

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
    int N;
    cin >> N;

    ll a = 1;
    while(a < N) a *= 10;
    a /= 10;

    ll ans = (((N - a + 2) % MOD) * ((N - a + 1) % MOD) % MOD) * 499122177 % MOD;

    a /= 10;

    while(a != 0){
        ans = (((((a % MOD) * 9) % MOD) * ((a % MOD) * 9 + 1) % MOD) % MOD + ans) * 499122177 % MOD;
        a /= 10;
    }
    
    OUT(ans);
}