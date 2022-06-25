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

    VI ans(N);

    REP(i, N / 2 + 1){
        ans[i * 2] = i + 1;
        if(i * 2 + 1 < N && N % 2 == 0) ans[i * 2 + 1] = i + 1 + N % 2 + N / 2;
    }

    REP(_, N) {
        REP(i, N){
            cout << ans[i] << " ";
            ans[i] += N;
        }
        cout << "\n";
    }
}