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
    ll N;
    string K;
    cin >> N >> K;

    ll b = stoll(K);
    reverse(ALL(K));
    ll a = stoll(K);

    if(a < b){
        OUT(0);
        return 0;
    }

    ll ans = 0;
    while(b <= N){
        b *= 10;
        ans += 1;
    }

    while(a <= N){
        a *= 10;
        ans += 1;
    }

    if(a == b) ans /= 2;
    
    OUT(ans);
}