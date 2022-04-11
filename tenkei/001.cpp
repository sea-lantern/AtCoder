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
    int N, L, K;
    cin >> N >> L >> K; K++;

    VI A(N+2, 0);
    REP(i, N) cin >> A[i + 1];
    A[N + 1] = L;

    int ok = -1, ng = L + 1;
    while(1 < ng - ok){
        int m = (ok + ng) / 2;
        int now = 0, cnt = 0;
        REP(i, N+2){
            if(m <= A[i] - now){
                now = A[i];
                cnt++;
                if(cnt == K) break;
            }
        }
        if(cnt==K) ok = m;
        else ng = m;
    }

    OUT(ok);
}