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
    ll T;
    cin >> T;

    REP(i, T){
        ll N, A, B, X, Y, Z;
        cin >> N >> A >> B >> X >> Y >> Z;

        vector<double> cp(3);
        cp[0] = (double)1 / X;
        cp[1] = (double)A / Y;
        cp[2] = (double)B / Z;

        if(cp[1] <= cp[0] && cp[2] <= cp[0]){
            OUT(X * N);
        } else if(cp[2] <= cp[1]){
            if(cp[2] <= cp[0]){
                OUT((N / A) * Y + (N % A) * X);
            } else {
                
            }
        } else {
            if(cp[1] <= cp[0]){
                OUT((N / B) * Z + (N % B) * X);
            } else {
                OUT((N / B) * Z + (N % B) * X);
            }
        }
    }
}