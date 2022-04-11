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

    VI A(1000);

    A[0] = 1;

    int deg = 0;

    REP(k, N) {
        int r; cin >> r;
        deg += r;
        A[deg % 360] = 1;
    }

    int i = 0;
    int ans = 0;
    while(i < 360){
        int cnt = 0;
        while(A[i%360] != 1){
            cnt++;
            i++;
        }
        ans = max(cnt + 1, ans);
        i++;
    }
    
    OUT(ans);
}