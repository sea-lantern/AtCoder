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
    int N, Q;
    cin >> N >> Q;

    map<int, VI> m;
    REP(i, N) {
        int a; cin >> a;
        m[a].push_back(i+1);
    }

    REP(i, Q){
        int x, k;
        cin >> x >> k;
        if(m.count(x) == 0) OUT(-1);
        else if(m[x].size() < k) OUT(-1);
        else OUT(m[x][k-1]);
    }
}