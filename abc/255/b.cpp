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
constexpr ll INF=2e18;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    ll N, K;
    cin >> N >> K;

    VI A(K);
    REP(i, K){
        ll a;
        cin >> a;
        A[i] = a - 1;
    }

    vector<P> XY(N);
    REP(i, N) cin >> XY[i].first >> XY[i].second;

    vector<double> d(N, INF);

    REP(k, K){
        REP(i, N){
            double dist = (XY[i].first - XY[A[k]].first) * (XY[i].first - XY[A[k]].first) + (XY[i].second - XY[A[k]].second) * (XY[i].second - XY[A[k]].second);
            dist = sqrt(dist);
            d[i] = min(d[i], dist);
        }
    }

    double ans = 0;
    REP(i, N) {
        ans = max(ans, d[i]);
    }

    cout << fixed << setprecision(12) << ans << "\n";
}