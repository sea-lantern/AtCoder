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

    set<ll> st;
    map<ll, ll> mp;

    ll Q;
    cin >> Q;

    while(Q--){
        int type;
        cin >> type;
        if(type == 1){
            ll x;
            cin >> x;
            st.insert(x);
            mp[x] += 1;
        } else if(type == 2){
            ll x, c;
            cin >> x >> c;
            if(0 < mp[x] - c){
                mp[x] -= c;
            } else {
                mp[x] = 0;
                st.erase(x);
            }
        } else{
            OUT(*st.rbegin() - *st.begin());
        }
    }
}