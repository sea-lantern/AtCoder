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
    ll L, R;
    cin >> L >> R;

    for(ll i = R - L; 0 < i; i--){
        for(ll j = L; j + i <= R; j++){
            ll x = j;
            ll y = x + i;
            ll r = y % x;
            while(r){
                y = x;
                x = r;
                r = y % x;
            }
            if(x == 1){
                OUT(i);
                return 0;
            }
        }
    }
}