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
    string S;
    cin >> N >> S;

    vector<P> WS(N);

    ll cnt = 0;

    REP(i, N) {
        cin >> WS[i].first;

        if(S[i] == '0') {
            WS[i].second = 0;
        } else {
            WS[i].second = 1;
            cnt += 1;
        }
    }

    sort(ALL(WS));

    ll ans = cnt;
    ll i = 0;
    while(i < N){
        ll b = WS[i].first;
        if(WS[i].second == 1) cnt -= 1;
        else cnt += 1;
        while(i + 1 < N && b == WS[i + 1].first){
            if(WS[i + 1].second == 1) cnt -= 1;
            else cnt += 1;
            i += 1;
        }
        ans = max(ans, cnt);
        i++;
    }
    
    OUT(ans);
}