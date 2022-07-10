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
    string S, T;
    cin >> S >> T;

    vector<P> sc, tc;

    REP(i, S.size()){
        ll cnt = 1;
        while(i + 1 < S.size() && S[i] == S[i+1]){
            i++;
            cnt++;
        }
        sc.push_back({S[i], cnt});
    }

    REP(i, T.size()){
        ll cnt = 1;
        while(i + 1 < T.size() && T[i] == T[i+1]){
            i++;
            cnt++;
        }
        tc.push_back({T[i], cnt});
    }

    if(sc.size() != tc.size()){
        OUT("No");
        return 0;
    }

    REP(i, sc.size()){
        if(sc[i].first != tc[i].first){
            OUT("No");
            return 0;
        }
        if(sc[i].second != tc[i].second){
            if(sc[i].second == 1 || (tc[i].second < sc[i].second)){
                OUT("No");
                return 0;
            }
        }
    }
    
    OUT("Yes");
}