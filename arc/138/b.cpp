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

    VI A(N);
    REP(i, N) cin >> A[i];

    int k = 0;
    ll left = 0, right = N-1;
    while(left <= right){
        if(A[right] == k) {
            while(A[right] == k) right--;
        } else if(A[left] == k) {
            left++;
            k = k ? 0 : 1;
        } else {
            OUT("No");
            return 0;
        }
    }

    OUT("Yes");
}