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
//constexpr ll MOD=1000000007;
//constexpr ll INF=2e18;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    ll N, M;
    cin >> N >> M;

    ll A, B, C, D, E, F;
    cin >> A >> B >> C >> D >> E >> F;

    map<P, bool> xy;
    REP(i, M) {
        ll x, y;
        cin >> x >> y;
        xy[{x, y}] = true;
    }

    map<tuple<ll, ll, ll>, ll> c;

    queue<VI> q;
    q.push({0, 0, 0});

    REP(_, N) {
        while(!q.empty()){
            VI a = q.front();
            q.pop();
        }
    }
}