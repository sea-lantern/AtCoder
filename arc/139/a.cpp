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

    VI T(N);
    REP(i, N) cin >> T[i];

    ll ans = 0;
    REP(i, N){
        ll n = ans >> T[i];
        if(n){
            if(n & 1) n += 2;
            else n += 1; 
        } else {
            n += 1;
        }
        ans = n << T[i];
    }

    OUT(ans);
}