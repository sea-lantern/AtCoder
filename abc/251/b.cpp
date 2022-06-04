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
    ll N, W;
    cin >> N >> W;

    VI A(N);

    REP(i, N) cin >> A[i];

    set<ll> st;

    if(1 <= N){
        REP(i, N){
                if(A[i] <= W) st.insert(A[i]);
        }
    }

    if(2 <= N){
        REP(i, N){
            for(ll j = i + 1; j < N; j++){
                if(A[i] + A[j] <= W) st.insert(A[i] + A[j]);
            }
        }
    }


    if(3 <= N){
        REP(i, N){
            for(ll j = i + 1; j < N; j++){
                for(ll k = j + 1; k < N; k++){
                    if(A[i] + A[j] + A[k] <= W) st.insert(A[i] + A[j] + A[k]);
                }
            }
        }
    }
    
    OUT(st.size());
}