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

    VI A;

    REP(i, 61) {
        if(1LL << i & N) A.push_back(1LL << i);
    }
    ll n = A.size();

    REP(i, 1LL << n){
        ll ans = 0;
        REP(j, n) {
            if(i & 1LL << j) ans += A[j];
        }
        OUT(ans);
    }
}