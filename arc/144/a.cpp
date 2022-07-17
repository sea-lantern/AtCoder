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
    ll N;
    cin >> N;

    ll M = 2 * N;

    OUT(M);

    VI ans(4);
    
    ans[3] = N / 4;
    N %= 4;
    ans[2] = N / 3;
    N %= 3;
    ans[1] = N / 2;
    ans[0] = N %= 2;

    REP(i, 4){
        REP(_, ans[i]) cout << i + 1;
    }
    cout << endl;
}