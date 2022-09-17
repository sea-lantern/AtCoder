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
constexpr ll INF=2e18;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    ll N;
    cin >> N;

    VI A(N);
    REP(i, N) cin >> A[i];

    sort(ALL(A));

    queue<ll> q;
    ll mn = A[0];
    REP(i, N) {
        q.push(A[N-1-i]);
    }

    ll ans = 0;
    while(q.size() != 1) {
        ll mx = q.front(); q.pop();
        if(mx % mn) {
            q.push(mx % mn);
            mn = mx % mn;
        }
        ans++;
    }
    
    OUT(ans);
}