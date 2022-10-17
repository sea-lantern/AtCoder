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

    string S, T;
    cin >> S >> T;

    ll cnt = 0;
    ll cnt01 = 0;

    VI A(N);

    REP(i, N) {
        if(S[i] == T[i]) continue;
        if(S[i] == '0') cnt01 += 1;
        else cnt01 -= 1;
        cnt += 1;
    }

    if(cnt % 2) {
        OUT("-1");
        return 0;
    }

    cnt01 /= 2;

    REP(i, N) {
        if(cnt01 == 0) break;
        if(S[N - 1 - i] == T[N - 1 - i]) continue;
        if(0 < cnt01 && S[N - 1 - i] == '0') {
            A[N - 1 - i] = 1;
            cnt01 -= 1;
        }
        else if (cnt01 < 0 && S[N - 1 - i] == '1')
        {
            A[N - 1 - i] = 1;
            cnt01 += 1;
        }
    }

    REP(i, N) cout << A[i];
    OUT("");
}