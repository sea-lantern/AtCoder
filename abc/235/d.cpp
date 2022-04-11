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
    int a, N;
    cin >> a >> N;

    map<int, int> dp;

    dp[1] = 0;

    int keta = 1;
    int n = 1;
    {
        int n = 0;
        int n2 = n * a;
        dp[n2] = dp[n] + 1;
        REP(i, keta-1){
            if(n2 % 10 != 0) break;
            n2 = n2/10 + (n2 % 10) * 10
        }
    }
    
    OUT();
}