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
    ll a, b, d;
    cin >> a >> b >> d;

    double theta = d / 180.0 * M_PI;

    double X, Y;

    X = a * cos(theta) - b * sin(theta);
    Y = b * cos(theta) + a * sin(theta);
    
    cout << fixed << setprecision(10) << X;
    cout << " ";
    cout << fixed << setprecision(10) << Y;
    cout << endl;
}