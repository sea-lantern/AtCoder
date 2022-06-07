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
    ll N, M;
    cin >> N >> M;

    vector<vector<P>> A(N);
    VI P(M);
    REP(i, M) {
        ll y;
        cin >> P[i] >> y;
        A[P[i]-1].push_back({y, i});
    }

    VI ind(M);
    REP(i, N){
        sort(ALL(A[i]));
        REP(j, A[i].size()){
            ind[A[i][j].second] = j + 1;
        }
    }

    REP(i, M){
        cout << setfill('0') << setw(6) << P[i];
        cout << setfill('0') << setw(6) << ind[i] << "\n";
    }
}