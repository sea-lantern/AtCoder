//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <iomanip>
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
    int A, B, C, X;
    cin >> A >> B >> C >> X;

    double ans = 0;

    if(X <= A){
        ans = 1;
    } else if (X <= B){
        ans = (double)C / (B - A);
    }

    cout << fixed << setprecision(10) << ans << endl;
}