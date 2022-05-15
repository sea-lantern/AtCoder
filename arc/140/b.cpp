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
    ll N;
    cin >> N;
    string S;
    cin >> S;

    VI A;

    for(ll i = 1; i < N - 1; i++){
        if(S[i-1] == 'A' && S[i] == 'R' && S[i+1] == 'C'){
            ll l = i - 1;
            ll r = i + 1;
            while(0 <= l - 1 && S[l-1] == 'A') l--;
            while(r + 1 < N && S[r+1] == 'C') r++;

            A.push_back(min(r - i, i - l));
        }
    }

    sort(ALL(A));

    ll ans = 0;
    while(A.size()){
        ll k = A[A.size() - 1] - 1;
        A.pop_back();
        if(k) A.insert(lower_bound(ALL(A), k), k);

        ans += 1;
        
        if(A.size() == 0) break;

        A.erase(A.begin());
        ans += 1;
    }
    
    OUT(ans);
}