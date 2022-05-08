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
    
    vector<bool> prime(1000010, true);
    prime[0] = false;
    prime[1] = false;
    for (int i = 2; i * i <= 1000010; i++) {
        if (!prime[i]) continue;
        for (int j = i * i; j <= 1000010; j += i) {
            prime[j] = false;
        }
    }

    VI cnt(1000010, 0);

    for(ll i = 1; i < 1000010; i++){
        cnt[i] = cnt[i-1];
        if(prime[i]) cnt[i] += 1;
    }

    ll ans = 0;
    for(ll q = 2; q * q * q < N; q++){
        if(!prime[q]) continue;
        ll p = N / (q * q * q);
        if(q <= p) p = q - 1;
        ans += cnt[p];
    }
    
    OUT(ans);
}