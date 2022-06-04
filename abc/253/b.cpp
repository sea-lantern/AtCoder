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
    int H, W;
    cin >> H >> W;

    VI x, y;

    REP(i, H){
        string s;
        cin >> s;
        REP(j, W){
            if(s[j] == 'o'){
                y.push_back(i);
                x.push_back(j);
            }
        }
    }

    OUT(abs(x[0] - x[1]) + abs(y[0] - y[1]));
}