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
    int N;
    cin >> N;

    int t = 0, x = 0, y = 0;
    int nt, nx, ny;

    REP(i, N){
        cin >> nt >> nx >> ny;
        
        if((nt - t) < abs(nx - x) + abs(ny - y) || (nt - t) % 2 != (abs(nx - x) + abs(ny - y)) % 2){
            OUT("No");
            return 0;
        }

        t = nt;
        x = nx;
        y = ny;
    }

    OUT("Yes");
}