#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
typedef vector<ll> VI;
typedef vector<VI> VVI;
#define REP(i,n) for(ll i=0;i<(n);i++)
#define ALL(v) v.begin(),v.end()
#define OUT(n) cout << (n) << "\n"
constexpr ll MOD=998244353;
constexpr ll INF=2e18;

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
    int H, W;
    cin >> H >> W;

    VVI A(H, VI(W));

    REP(i, H) REP(j, W) cin >> A[i][j];

    VI hsum(H, 0), wsum(W, 0);

    REP(i, H){
        REP(j, W){
            hsum[i] += A[i][j];
            wsum[j] += A[i][j];
        }
    }

    REP(i, H){
        REP(j, W){
            cout << wsum[j] + hsum[i] - A[i][j];
            cout << " ";
        }
        cout << "\n";
    }
}