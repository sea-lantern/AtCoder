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
    vector<string> S(10);
    REP(i, 10) cin >> S[i];

    ll a, b, c, d;

    REP(i, 10) REP(j, 10) {
        if(S[i][j] == '#') {
            b = i + 1;
            c = j + 1;
            break;
        }
    }

    REP(i, 10) REP(j, 10) {
        if(S[9-i][9-j] == '#') {
            a = 9 - i + 1;
            d = 9 - j + 1;
            break;
        }
    }
    
    OUT(a << " " << b);
    OUT(c << " " << d);
}