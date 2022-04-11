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
	
	map<string, int> mp;
    vector<string> s(N), t(N);
	
	REP(i, N){
		cin >> s[i] >> t[i];
		mp[s[i]] += 1;
		if(s[i] != t[i]) mp[t[i]] += 1;
	}
	
	REP(i, N){
		if(2 <= mp[s[i]] && 2 <= mp[t[i]]){
			OUT("No");
			return 0;
		}
	}
	OUT("Yes");
}