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
    ll N, M;
    cin >> N >> M;

    vector<pair<ll, ll>> AB(N);
    vector<pair<ll, ll>> CD(M);
    REP(i, N) cin >> AB[i].first;
    REP(i, N) cin >> AB[i].second;
    REP(i, M) cin >> CD[i].first;
    REP(i, M) cin >> CD[i].second;

    sort(ALL(AB));
    sort(ALL(CD));

    REP(i, N){
        if(CD[M - i - 1].first < AB[N - i - 1].first || CD[M - i - 1].second < AB[N - i - 1].second){
            OUT("No");
            return 0;
        }
    }
    
    OUT("Yes");
}