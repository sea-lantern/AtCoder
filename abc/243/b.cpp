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

    VI A(N), B(N);

    REP(i, N) cin >> A[i];
    REP(i, N) cin >> B[i];

    ll same_ans = 0;
    REP(i, N){
        if(A[i] == B[i]) same_ans += 1;
    }

    sort(ALL(A));
    sort(ALL(B));

    ll diff_ans = 0;

    ll j = 0;
    REP(i, N){
        while(B[j] < A[i]){
                j += 1;
        }
        if(A[i] == B[j]){
            diff_ans += 1;
        }
    }
    
    OUT(same_ans);
    OUT(diff_ans - same_ans);
}