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
    ll V, A, B, C;
    cin >> V >> A >> B >> C;

    while(1){
        V -= A;
        if(V < 0){
            OUT("F");
            break;
        }
        V -= B;
        if(V < 0){
            OUT("M");
            break;
        }
        V -= C;
        if(V < 0){
            OUT("T");
            break;
        }
    }
}