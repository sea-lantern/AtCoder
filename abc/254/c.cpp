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
    ll N, K;
    cin >> N >> K;

    VI a(N);
    REP(i, N) cin >> a[i];

    VVI b(K);
    REP(i, K){
        ll j = i;
        while(j < N){
            b[i].push_back(a[j]);
            j += K;
        }
        sort(ALL(b[i]));
    }

    
    ll j = 0;
    ll tmp = -1;
    while(j * K < N){
        REP(i, K){
            if(j < b[i].size()){
                if(b[i][j] < tmp){
                    OUT("No");
                    return 0;
                }
                tmp = b[i][j];
            }
        }
        j += 1;
    }
    
    OUT("Yes");
}