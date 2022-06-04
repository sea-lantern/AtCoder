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

    VI NN;

    for(ll a = 1; a * a <= N; a++){
        NN.push_back(a * a);
    }

    ll ans = 0;

    for(ll i = 1; i <= N; i++){
        ll k = 1;
        ll n = i;
        for(ll a = 2; a * a <= n; a++){
            ll ex = 0;
            while (n % a == 0) {
                ex += 1;
                n /= a;
            }
            if(ex % 2 != 0) k *= a;
        }
        if(n != 1) k *= n;

        ll ok = -1, ng = NN.size();
        while(1 < ng - ok){
            ll m = (ok + ng) / 2;
            if(NN[m] * k <= N) ok = m;
            else ng = m;
        }

        ans += ok + 1;
    }

    OUT(ans);
}