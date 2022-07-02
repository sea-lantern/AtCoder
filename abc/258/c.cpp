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
    ll N, Q;
    string S;
    cin >> N >> Q >> S;

    ll pos = 0;
    while(Q--){
        ll q;
        cin >> q;
        if(q == 1) {
            ll x;
            cin >> x;
            pos += x;
            pos %= N;
        } else {
            ll x;
            cin >> x;
            OUT(S[(N + N - pos + x - 1) % N]);
        }
    }
}