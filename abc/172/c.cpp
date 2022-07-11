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
    ll N, M, K;
    cin >> N >> M >> K;

    VI A(N+1), B(M+1);
    REP(i, N) {
        cin >> A[i+1];
        A[i+1] += A[i];
    }
    REP(i, M) {
        cin >> B[i+1];
        B[i+1] += B[i];
    }

    ll ans = 0;
    ll j = M;

    REP(i, N+1){
        if(K - A[i] < 0) break;
        while(0 <= j - 1 && K < B[j] + A[i]) j--;
        ans = max(ans, i + j);
    }

    OUT(ans);
}