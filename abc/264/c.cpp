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
    ll H1, W1;
    cin >> H1 >> W1;
    VVI A(H1, VI(W1));
    REP(i, H1) REP(j, W1) cin >> A[i][j];

    ll H2, W2;
    cin >> H2 >> W2;
    VVI B(H2, VI(W2));
    REP(i, H2) REP(j, W2) cin >> B[i][j];
    
    REP(h, H1 - H2 + 1) REP(w, W1 - W2 + 1) {
        REP(y, H2) REP(x, W2) {
            if(A[h][w] != B[y][x]) {
                y = H2;
                continue;
            }
        }
    }

    OUT("");
}