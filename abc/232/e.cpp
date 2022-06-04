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
    ll H, W, K;
    cin >> H >> W >> K;

    ll ans = H + W - 2;

    if(3 < K){
        REP(i, K-3){
            ans = (ans * (H+W-2)) % MOD;
        }
        ans = (ans + (W - 1) * (H - 1) * 2) % MOD;
        ans = (ans + (H - 1) * (H - 2)) % MOD;
        ans = (ans + (W - 1) * (W - 2)) % MOD;
        ans = (ans + H + W - 2) % MOD;
    }
    

    OUT(ans);
}