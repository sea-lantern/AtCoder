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
    ll N, K;
    cin >> N >> K;

    string S;
    cin >> S;

    VI yaku;

    for(int i = 1; i * i <= N; i++){
        if(N % i) continue;
        yaku.push_back(i);
        if(i != N / i) yaku.push_back(N / i);
    }

    sort(ALL(yaku));
    reverse(ALL(yaku));

    ll ans = INF;

    REP(i, yaku.size()){
        VVI cnt(yaku[i], VI(26, 0));
        REP(j, N / yaku[i]){
            REP(k, yaku[i]){
                cnt[k][S[yaku[i] * j + k] - 'a']++;
            }
        }

        ll k = 0;
        REP(j, yaku[i]){
            ll m = 0;
            REP(k, 26){
                m = max(m, cnt[j][k]);
            }
            k += N / yaku[i] - m;
        }
        if(k <= K) ans = yaku[i];
    }

    OUT(ans);
}