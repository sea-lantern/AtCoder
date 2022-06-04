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
    int N, A, B;
    cin >> N >> A >> B;

    VVI tile(N * A, VI(N * B, 0));

    REP(i, N){
        REP(j, N){
            if((i + j) % 2 == 1){
                REP(x, A){
                    REP(y, B){
                        tile[i * A + x][j * B + y] = 1;
                    }
                }
            }

        }
    }

    REP(i, N * A){
        REP(j, N * B){
            if(tile[i][j] == 0) cout << '.';
            else cout << '#';
        }
        cout << "\n";
    }
}