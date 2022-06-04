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
    ll T;
    cin >> T;

    while(T--){
        ll N;
        cin >> N;

        string S = to_string(N);

        ll k = 1, a = 10;
        while(N / a){
            a *= 10;
            k++;
        }

        ll ans = 0;

        REP(i, k-1){
            if(k % (i + 1) != 0) continue;
            VI ns;
            REP(j, k/(i+1)){
                ns.push_back(stoll(S.substr(j*(i+1), i+1)));
            }

            ll anst = ns[0];
            REP(j, k/(i+1) - 1){
                if(anst < ns[j+1]){
                    break;
                }else if(ns[j+1] < anst){
                    anst -= 1;
                    break;
                }
            }

            string s;

            if(anst == 0){
                REP(j, k/(i+1)-1){
                    s += '9';
                }
            }else{
                REP(j, k/(i+1)){
                    s += to_string(anst);
                }
            }

            ans = max(ans, stoll(s));
        }

        OUT(ans);
    }
}