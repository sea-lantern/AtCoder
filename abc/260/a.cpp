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

    if(S[0] == S[1] && S[1] == S[2]) OUT(-1);
    else if(S[0] == S[1]) OUT(S[2]);
    else if(S[1] == S[2]) OUT(S[0]);
    else if(S[2] == S[0]) OUT(S[1]);
    else OUT(S[0]);
}