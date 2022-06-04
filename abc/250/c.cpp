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
    ll N, Q;
    cin >> N >> Q;

    VI pos(N);
    VI a(N);

    REP(i, N){
        pos[i] = i;
        a[i] = i;
    }

    REP(i, Q){
        ll x; 
        cin >> x;
        x--;

        if(pos[x] != N - 1){
            ll tmp = a[pos[x]];
            ll j = a[pos[x] + 1];
            a[pos[x]] = a[pos[x] + 1];
            a[pos[x] + 1] = tmp;
            pos[x] += 1;
            pos[j] -= 1;
        } else {
            ll tmp = a[pos[x]];
            ll j = a[pos[x] - 1];
            a[pos[x]] = a[pos[x] - 1];
            a[pos[x] - 1] = tmp;
            pos[x] -= 1;
            pos[j] += 1;
        }
    }

    REP(i, N){
        cout << a[i] + 1 << ' ';
    }

    cout << "\n";
}