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

    vector<P> p(N);
    REP(i, N) cin >> p[i].first >> p[i].second;

    double ans = 0;

    REP(i, N){
        for(int j = i + 1; j < N; j++){
            int x = p[i].first - p[j].first;
            int y = p[i].second - p[j].second;
            x *= x;
            y *= y;
            ans = max(ans, sqrt(x + y));
        }
    }
    
    cout << setprecision(16) << ans << endl;
}