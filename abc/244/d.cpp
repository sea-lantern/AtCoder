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

    char s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    map<char, int> mp;

    mp[s1] = 0;
    mp[s2] = 1;
    mp[s3] = 2;

    char t1, t2, t3;
    cin >> t1 >> t2 >> t3;

    int k = 100 * mp[t1] + 10 * mp[t2] + mp[t3];

    if(k == 12 || k == 120 || k == 201) OUT("Yes");
    else OUT("No");
}