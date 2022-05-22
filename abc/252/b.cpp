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
    int N, K;
    cin >> N >> K;

    VI A(N), C;

    ll m = 0;
    REP(i, N){
        cin >> A[i];
        m = max(m, A[i]);
    }

    REP(i, N){
        if(m == A[i]){
            C.push_back(i);
        }
    }

    ll f = 0;
    REP(i, K){
        ll b;
        cin >> b;
        REP(j, C.size()){
            if(C[j] == b - 1) f = 1;
        }
    }
    
    if(f) OUT("Yes");
    else OUT("No");
}