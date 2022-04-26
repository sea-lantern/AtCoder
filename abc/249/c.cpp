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
    int N, K;
    cin >> N >> K;

    VVI s(N, VI(26, 0));

    REP(i, N){
        string S;
        cin >> S;
        REP(j, S.size()){
            s[i][S[j] - 'a'] = 1;
        }
    }

    int ans = 0;
    REP(i, 1 << N){
        VI sum(26, 0);
        REP(j, N){
            if(i & (1<<j)){
                REP(k, 26){
                    sum[k] += s[j][k];
                }
            }
        }
        int cnt = 0;
        REP(j, 26){
            if(sum[j] == K) cnt++;
        }
        ans = max(ans, cnt);
    }
    
    OUT(ans);
}