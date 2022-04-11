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
    int N, M;
    cin >> N >> M;

    VI A(N+1), B(M+1), C(N+M+1);

    REP(i, N+1) cin >> A[i];
    REP(i, N+M+1) cin >> C[i];

    REP(i, M + 1){
        B[M-i] = C[N+M-i] / A[N];
        REP(j, N+1){
            C[N+M-(i+j)] -= B[M-i] * A[N-j];
        }
    }

    REP(i, M) cout << B[i] << " ";
    OUT(B[M]);
}