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

    VVI a(30);

    a[0].push_back(1);
    a[1].push_back(1);
    a[1].push_back(1);
    
    for(int i = 2; i < 30; i++){
        a[i].push_back(1);
        REP(j, a[i-1].size()-1){
            a[i].push_back(a[i-1][j] + a[i-1][j+1]);
        }
        a[i].push_back(1);
    }

    REP(i, N) {
        REP(j, a[i].size()){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}