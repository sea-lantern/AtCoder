#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
typedef vector<ll> VI;
typedef vector<VI> VVI;
#define REP(i,n) for(ll i=0;i<(n);i++)
#define ALL(v) v.begin(),v.end()
#define OUT(n) cout << (n) << "\n"
constexpr ll MOD=998244353;
constexpr ll INF=2e18;

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
    int N, K;
    cin >> N >> K;
    string s;
    cin >> s;

    VVI a(26, VI(N+1, N));
    for(int i = N-1; 0 <= i; i--){
        REP(j, 26) a[j][i] = a[j][i+1];
        a[s[i]-'a'][i] = i;
    }

    string ans;
    REP(i, N){
        REP(j, 26){
            if(0 <= N - K - a[j][i] + (int)ans.size()){
                ans += 'a' + j;
                i = a[j][i];
                break;
            }
        }
        if(K == ans.size()) break;
    }
    OUT(ans);
}