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
    int N;
    cin >> N;


    VI K(2010, 0);

    ll n = 1;
    cout << n << endl;
    K[n] = 1;
    while(1){
        ll a;
        cin >> a;
        if(!a) return 0;
        K[a] = 1;
        while(K[n]) n++;
        K[n] = 1;
        cout << n << endl;
    }
}