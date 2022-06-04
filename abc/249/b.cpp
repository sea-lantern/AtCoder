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
    string S;
    cin >> S;

    VI az(26, 0), AZ(26, 0);

    VI f(2, 0);

    REP(i, S.size()){
        if('a' <= S[i] && S[i] <= 'z'){
            f[0] = 1;
            if(az[S[i] - 'a'] == 1){
                OUT("No");
                return 0;
            }
            az[S[i] - 'a'] = 1;
        } else {
            f[1] = 1;
            if(AZ[S[i] - 'A'] == 1){
                OUT("No");
                return 0;
            }
            AZ[S[i] - 'A'] = 1;
        }
    }
    
    if(f[0] and f[1]) OUT("Yes");
    else OUT("No");
}