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

    VI A(N);
    REP(i, N) cin >> A[i];

    sort(ALL(A));

    ll ans = 0;
    ans = max(ans, stoll(to_string(A[N-1]) + to_string(A[N-2]) + to_string(A[N-3])));
    ans = max(ans, stoll(to_string(A[N-1]) + to_string(A[N-3]) + to_string(A[N-2])));
    ans = max(ans, stoll(to_string(A[N-2]) + to_string(A[N-1]) + to_string(A[N-3])));
    ans = max(ans, stoll(to_string(A[N-2]) + to_string(A[N-3]) + to_string(A[N-1])));
    ans = max(ans, stoll(to_string(A[N-3]) + to_string(A[N-1]) + to_string(A[N-2])));
    ans = max(ans, stoll(to_string(A[N-3]) + to_string(A[N-2]) + to_string(A[N-1])));
    
    OUT(ans);
}