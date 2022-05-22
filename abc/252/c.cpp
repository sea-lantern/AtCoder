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
    int N;
    cin >> N;

    vector<string> S(N);

    REP(i, N) cin >> S[i];

    ll ans = INF;
    REP(i, 10){
        ll t = 0;
        REP(j, 10){
            int c = 0;
            REP(k, N){
                if(S[k][(j+1)%10] == '0' + i){
                    t = max(t, (j+1)%10 + 10 * c);
                    c += 1;
                }
            }
        }

        ans = min(ans, t);
    }
    
    OUT(ans);
}