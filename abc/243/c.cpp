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

    VI A(N), B(N);
    REP(i, N) {
        cin >> A[i];
        cin >> B[i];
    }

    string S;
    cin >> S;

    map<ll, map<char, VI>> mp;

    set<ll> st;

    REP(i, N) {
        mp[B[i]][S[i]].push_back(A[i]);
        st.insert(B[i]);
    }

    for(auto x: st){
        sort(ALL(mp[x]['R']));
        sort(ALL(mp[x]['L']));
    }

    for(auto x: st){
        if(!mp[x]['R'].size() || !mp[x]['L'].size()) continue;
        if(mp[x]['R'][0] < mp[x]['L'][mp[x]['L'].size() - 1]){
            OUT("Yes");
            return 0;
        }
    }
    
    OUT("No");
}