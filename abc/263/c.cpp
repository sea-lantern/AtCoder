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

ll N, M;

void solve(int j, int n, string s) {
    for(int i = n; i <= j + M - N; i++){
        string t = s;
        t += to_string(i) + " ";
        if(j != N) {
            solve(j + 1, i + 1, t);
        } else {
            OUT(t);
        }
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    cin >> N >> M;

    solve(1, 1, "");
}