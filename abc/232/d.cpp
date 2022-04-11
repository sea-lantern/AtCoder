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
    int H, W;
    cin >> H >> W;

    vector<vector<int>> c(H, vector<int>(W, -1));

    REP(i, H){
        string s;
        cin >> s;
        REP(j, W) if(s[j] == '.') c[i][j] = 0;
    }

    int ans = 0;
    c[0][0] = 1;
    REP(i, H){
        REP(j, W){
            if(c[i][j] <= 0) continue;

            if(i+1 < H && c[i+1][j] != -1)
                c[i+1][j] = c[i][j] + 1;
            
            if(j+1 < W && c[i][j+1] != -1)
                c[i][j+1] = c[i][j] + 1;
            
            ans = max(ans, c[i][j]);
        }
    }
    
    OUT(ans);
}