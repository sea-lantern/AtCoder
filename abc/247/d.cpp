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
	int N;
	cin >> N;
	
	vector<P> p;
	ll index = 0;
	
	REP(i, N){
		int q; cin >> q;
		if(q == 1){
			P x; cin >> x.first >> x.second;
			p.push_back(x);
		} else {
			ll ans = 0;
			ll c; cin >> c;
			while(index < p.size() && p[index].second <= c) {
				ans += p[index].first * p[index].second;
				c -= p[index].second;
				index++;
			}
			ans += p[index].first * c;
			p[index].second -= c;
			OUT(ans);
		}
	}
}