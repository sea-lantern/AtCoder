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
    VVI y(N);
    map<ll, ll> mp;
    REP(i, N){
        cin >> A[i];
        mp[A[i]] += 1;
        for(ll j = 1; j * j <= A[i]; j++){
            if(A[i] % j == 0){
                y[i].push_back(j);
                if(A[i] / j != j) y[i].push_back(A[i] / j);
            }
        }
    }

    ll ans = 0;
    REP(i, N){
        REP(j, y[i].size()){
            ans += mp[A[i] / y[i][j]] * mp[y[i][j]];
        }
    }
    
    OUT(ans);
}