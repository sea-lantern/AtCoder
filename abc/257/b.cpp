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
    ll N, K, Q;
    cin >> N >> K >> Q;

    VI A(K);
    REP(i, K) cin >> A[i];

    while(Q--){
        ll L;
        cin >> L;
        L -= 1;

        if(L == K - 1){
            if(A[L] == N) continue;
            A[L] += 1;
        } else {
            if(A[L] + 1 == A[L + 1]) continue;
            A[L] += 1;
        }
    }

    REP(i, K) cout << A[i] << " ";
    cout << endl;
}