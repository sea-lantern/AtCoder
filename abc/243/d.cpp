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
    ll N, X;
    cin >> N >> X;

    string S;
    cin >> S;

    ll k = X;
    ll cnt = 1;
    while(0 < (k /= 2)) cnt += 1;

    ll diff = 0;

    ll ct = 0;
    REP(i, N){
        if(S[i] == 'U'){
            ct -= 1;
            if(cnt + ct <= 0) ct += 1;
            diff /= 2;
        } else if(S[i] == 'L'){
            ct += 1;
            diff *= 2;
        } else {
            ct += 1;
            diff = diff * 2 + 1;
        }
    }

    if(ct < 0){
        while(ct++) X /= 2;
    } else if(0 < ct){
        while(ct--) X *= 2;
    }
    OUT(X + diff);
}