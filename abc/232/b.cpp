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
    string S, T;
    cin >> S >> T;
    
    int diff = T[0] - S[0];

    if(diff < 0) diff += 26; 

    REP(i, S.size()){
        if((T[i] - 'a') == (S[i]+diff - 'a') % 26) continue;
        OUT("No");
        exit(0);
    }
    OUT("Yes");
}