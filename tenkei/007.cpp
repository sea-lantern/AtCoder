#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
typedef vector<ll> VI;
typedef vector<VI> VVI;
#define REP(i,n) for(ll i=0;i<(n);i++)
#define ALL(v) v.begin(),v.end()
#define OUT(n) cout << (n) << "\n"
constexpr ll MOD=998244353;
constexpr ll INF=2e18;

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
    int N;
    cin >> N;
    VI A(N);
    REP(i, N) cin >> A[i];
    A.push_back(INF);
    A.push_back(-INF);

    sort(ALL(A));

    int Q;
    cin >> Q;
    REP(i, Q){
        ll b;
        cin >> b;

        int ok = 0, ng = N;
        while(1 < ng - ok){
            int m = (ok + ng) / 2;
            if(A[m] <= b) ok = m;
            else ng = m;
        }
        OUT(min(abs(A[ok]-b), abs(A[ok+1]-b)));
    }
}