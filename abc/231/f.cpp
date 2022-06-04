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

    REP(i, N) cin >> A[i] >> B[i];

    sort(ALL(A));
    sort(ALL(B));

    int j = 0;
    int ans = 0;
    REP(i, N){
        while(A[i] <= B[j]){
            if(A[i] == B[j]){
                ans++;
            }
            j++;
        }
    }
    
    OUT(ans);
}