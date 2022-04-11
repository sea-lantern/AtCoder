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

ll N, X;

VVI a;

ll ans = 0;
void dfs(ll i, ll sum){
    for(auto b: a[i]){
        if(sum % b != 0) continue;
        ll s = sum / b;

        if(i == N - 1){
            if(s == 1) ans += 1;
            continue;
        }

        dfs(i+1, s);
    }
}

int main(){
	ios::sync_with_stdio(false); cin.tie(0);
    VI L(N);

    cin >> N >> X;

    a.resize(N);
    REP(i, N){
        ll L;
        cin >> L;
        REP(j, L){
            int ball;
            cin >> ball;
            a[i].push_back(ball);
        }
    }

    dfs(0, X);
    OUT(ans);
}