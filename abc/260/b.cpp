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
    ll N, X, Y, Z;
    cin >> N >> X >> Y >> Z;

    vector<P> A(N), B(N), AB(N);
    REP(i, N) {
        cin >> A[i].first;
        A[i].second = i;
        A[i].first *= -1;
    }

    REP(i, N) {
        cin >> B[i].first;
        B[i].second = i;
        B[i].first *= -1;
        AB[i].first = A[i].first + B[i].first;
        AB[i].second = i;
    }

    sort(ALL(A));
    sort(ALL(B));
    sort(ALL(AB));

    VI ans(N);

    REP(i, X) {
        ans[A[i].second] = 1;
    }

    REP(i, N) {
        if(!Y) break;
        if(ans[B[i].second] == 0){
            ans[B[i].second] = 1;
            Y -= 1;
        }
    }

    REP(i, N) {
        if(!Z) break;
        if(ans[AB[i].second] == 0){
            ans[AB[i].second] = 1;
            Z -= 1;
        }
    }


    REP(i, N) if(ans[i] == 1) OUT(i+1);
}