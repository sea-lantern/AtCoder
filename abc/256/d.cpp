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

    vector<P> LR(N);
    REP(i, N) cin >> LR[i].first >> LR[i].second;

    sort(ALL(LR));

    int i = 0;
    while(i < N){
        ll L = LR[i].first;
        cout << L << " ";
        ll R = LR[i].second;
        while(i + 1 < N && LR[i + 1].first <= R){
            R = max(R, LR[i + 1].second);
            i++;
        }
        OUT(R);
        i++;
    }
}