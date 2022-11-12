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

    VI A(N), B(N), f(N);
    map<ll, VI> mp;
    REP(i, N) {
        cin >> A[i] >> B[i];
        mp[A[i]].push_back(i);
        mp[B[i]].push_back(i);
    }

    ll ans = 1;

    queue<ll> q;
    q.push(1);

    while(!q.empty()) {
        ll v = q.front();
        q.pop();
        for (auto i: mp[v]) {
            if(f[i]) continue;
            f[i] = 1;
            if(A[i] != v) q.push(A[i]);
            if(B[i] != v) q.push(B[i]);
            ans = max(ans, max(A[i], B[i]));
        }
    }

    OUT(ans);
}