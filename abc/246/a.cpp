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

    VI x(3);
    VI y(3);

    REP(i, 3) cin >> x[i] >> y[i];

    if(x[0] == x[1]) cout << x[2] << " ";
    else if(x[1] == x[2]) cout << x[0] << " ";
    else cout << x[1] << " ";

    if(y[0] == y[1]) cout << y[2] << endl;
    else if(y[1] == y[2]) cout << y[0] << endl;
    else cout << y[1] << endl;
}