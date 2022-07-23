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

    vector<string> A(N);
    REP(i, N) cin >> A[i];

    REP(i, N) REP(j, N) {
        if(i == j) {
            if(A[i][j] != '-') {
                OUT("incorrect");
                return 0;
            }
        } else {
            if((A[i][j] == 'D' && A[j][i] == 'D') || (A[i][j] == 'L' && A[j][i] == 'W') || (A[i][j] == 'W' && A[j][i] == 'L')) {
            } else {
                OUT("incorrect");
                return 0;
            }
        }
    }
    
    OUT("correct");
}