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

    VI A(20);
    REP(i, 5) {
        ll a;
        cin >> a;
        A[a]++;
    }

    bool is2 = false, is3 = false;

    REP(i, 20) {
        if(A[i] == 2) is2 = true;
        else if(A[i] == 3) is3 = true;
    }

    if(is2 && is3) OUT("Yes");
    else OUT("No");
}