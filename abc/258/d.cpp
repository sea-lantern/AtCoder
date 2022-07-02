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
    ll N, X;
    cin >> N >> X;

    VI A(N), B(N);
    REP(i, N) cin >> A[i] >> B[i];

    VI F(N+1);
    ll mn = INF;
    REP(i, N){
        F[i+1] = F[i] + A[i] + B[i];
        ll n = (X - i - 1) * B[i] + F[i+1];
        if(n < 0) continue;
        mn = min(mn, n);
    }
    
    OUT(mn);
}