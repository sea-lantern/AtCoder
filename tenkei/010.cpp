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
    
    VVI sum(2, VI(N+1, 0));

    REP(i, N){
        int c, p;
        cin >> c >> p;
        sum[0][i+1] += sum[0][i];
        sum[1][i+1] += sum[1][i];
        sum[c-1][i+1] += p;
    }

    int Q;
    cin >> Q;
    REP(i, Q){
        int L, R;
        cin >> L >> R;
        cout << sum[0][R]-sum[0][L-1] << " " << sum[1][R]-sum[1][L-1] << "\n";
    }
}