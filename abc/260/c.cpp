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
    ll N, X, Y;
    cin >> N >> X >> Y;

    if(N == 1) {
        OUT(0);
        return 0;
    }

    ll red = 1, blue = 0;
    N -= 1;
    while(N--) {
        ll red2 = red + red * X + blue;
        ll blue2 = (red * X + blue) * Y;

        blue = blue2;
        red = red2;
    }
    
    OUT(blue);
}