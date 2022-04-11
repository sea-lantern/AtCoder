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

    stack<P> st;
    ll now = -1;
    ll ans = 0;

    REP(i, N){
        ll a; cin >> a;
        ans += 1;
        if(a == now){
            P k = st.top(); st.pop();
            k.second += 1;
            if(k.first == k.second){
                ans -= k.first;
                if(st.empty()){
                    now = -1;
                } else {
                    k = st.top();
                    now = k.first;
                }
            } else {
                st.push(k);
            }
        } else {
            now = a;
            P k;
            k.first = a;
            k.second = 1;
            st.push(k);
        }
        OUT(ans);
    }
}