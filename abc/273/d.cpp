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
    ll H, W, y, x, N;
    cin >> H >> W >> y >> x >> N;

    y -= 1;
    x -= 1;

    map<ll, set<ll>> lr, ud; 
    REP(i, N) {
        ll r, c;
        cin >> r >> c;
        lr[r-1].insert(c-1);
        ud[c-1].insert(r-1);
    }

    ll Q;
    cin >> Q;
    
    while(Q--){
        string d;
        ll l;
        cin >> d >> l;
        if(d == "L") {
            auto itr = lr[y].lower_bound(x);
            if(lr[y].size() != 0 && itr != lr[y].begin()) {
                    itr--;
                    x = max(max(0LL, x - l), *itr + 1);
            } else {
                x = max(0LL, x - l);
            }
        } else if(d == "R"){
            auto itr = lr[y].lower_bound(x);
            if(lr[y].size() != 0 && itr != lr[y].end()) {
                x = min(min(W - 1, x + l), *itr - 1);
            } else {
                x = min(W - 1, x + l);
            }
        } else if(d == "U") {
            auto itr = ud[x].lower_bound(y);
            if(ud[x].size() != 0 && itr != ud[x].begin()) {
                itr--;
                y = max(max(0LL, y - l), *itr + 1);
            } else {
                y = max(0LL, y - l);
            }
        } else if(d == "D"){
            auto itr = ud[x].lower_bound(y);
            if(ud[x].size() != 0 && itr != ud[x].end()) {
                    y = min(min(H - 1, y + l), *itr - 1);
            } else {
                y = min(H - 1, y + l);
            }
        }
        OUT(y + 1 << " " << x + 1);
    }
}