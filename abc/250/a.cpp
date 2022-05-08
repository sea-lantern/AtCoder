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
    int R, H, C, W;
    cin >> H >> W >> R >> C;

    int ans = 4;

    if(R == 1) ans -= 1;
    if(R == H) ans -= 1;
    if(C == 1) ans -= 1;
    if(C == W) ans -= 1;
    
    OUT(ans);
}