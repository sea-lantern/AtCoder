#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
typedef vector<ll> VI;
typedef vector<VI> VVI;
#define REP(i,n) for(ll i=0;i<(n);i++)
#define ALL(v) v.begin(),v.end()
#define OUT(n) cout << n << "\n"
constexpr ll MOD=998244353;
constexpr ll INF=2e18;

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
    ll N;
    cin >> N;

    REP(i, 1<<(N-1)){
        int cnt = 0;
        string s;
        REP(j, N){
            if(i & 1<<(N-j-1)){
                cnt -= 1;
                if(cnt < 0) break;
                s += ")";
            }else{
                cnt += 1;
                s += "(";
            }
        }
        if(cnt == 0 && s.size() == N) OUT(s);
    }
}