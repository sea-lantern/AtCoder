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
    string X;
    cin >> X;

    int s = X.size();

    if(s == 1){
        OUT(X);
        return 0;
    }

    int diff = X[1] - X[0];
    while(1){
        string ans = "";
        int j = 1;
        ans += X[0];
        while(0 < s - j){
            if(X[0] + diff * j < '0' || '9' < X[0] + diff * j) break;
            ans += X[0] + diff * j;
            j++;
        }
        if(ans.size() == s && X <= ans){
            OUT(ans);
            return 0;
        }
        diff += 1;
        if(9 < diff){
            diff = -9;
            X.insert(0, "1");
            s += 1;
        }
    }
}