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
    ll N;
    cin >> N;

    map<string, int> mp;

    string f = "HDCS";
    string s = "A23456789TJQK";
    REP(i, 4) REP(j, 13) {
        string t;
        t += f[i];
        t += s[j];
        mp[t] = 1;
    }

    REP(_, N) {
        string in;
        cin >> in;

        if(mp[in] == 1) {
            mp[in] += 1;
        } else {
            OUT("No");
            return 0;
        }
    }


    OUT("Yes");
}