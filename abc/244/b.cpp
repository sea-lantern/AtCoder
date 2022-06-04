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

    string T;
    cin >> T;

    VI pos(2, 0);
    ll direction = 1;

    REP(i, N){
        if(T[i] == 'S'){
            pos[(direction+1) % 2] -= (direction / 2) * 2 - 1;
        } else{
            direction = (direction + 1) % 4;
        }
    }

    
    cout << pos[0] << " " << pos[1] << endl;
}