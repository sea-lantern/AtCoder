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
    ll L1, R1, L2, R2;
    cin >> L1 >> R1 >> L2 >> R2;

    VI c(100);

    for(int a = L1; a < R1; a++) c[a]++;
    for(int a = L2; a < R2; a++) c[a]++;

    ll ans = 0;
    REP(i, 100) if(c[i] == 2) ans++;
    
    OUT(ans);
}