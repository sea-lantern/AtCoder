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

    string T = "atcoder";

    int ans = 0;
    REP(i, 7) {
        auto itr = S.find(T[i]);
        ans += itr - i;
        S.erase(itr, 1);
        S.insert(S.begin() + i, T[i]);
    }

    OUT(ans);
}