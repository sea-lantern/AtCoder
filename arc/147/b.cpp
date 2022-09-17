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

    VI A(N);
    REP(i, N) cin >> A[i];

    ll ans = 0;
    string str;
    ll cnt1 = 0;
    ll cnt2 = 0;
    REP(i, N) {
        if((A[i] + i + 1) % 2) {
            ll pos = i / 2;
            if(i % 2) {
                while(pos != cnt1) {
                    ll tmp = A[i];
                    A[i] = A[i-2];
                    A[i-2] = tmp;
                    str += "B " + to_string(i-1) + "\n";
                    ans += 1;
                    pos -= 1;
                }
                cnt1 += 1;
            } else {
                while(pos != cnt2) {
                    ll tmp = A[i];
                    A[i] = A[i-2];
                    A[i-2] = tmp;
                    str += "B " + to_string(i-1) + "\n";
                    ans += 1;
                    pos -= 1;
                }
                cnt2 += 1;
            }
        }
    }

    while(cnt1){
        ll tmp = A[cnt1 * 2 - 1];
        A[cnt1 * 2 - 1] = A[cnt1 * 2 - 2];
        A[cnt1 * 2 - 2] = tmp;
        str += "A " + to_string(cnt1 * 2 - 1) + "\n";
        ans += 1;
        cnt1 -= 1;
    }

    REP(i, N) {
        if(A[i] != i + 1) {
            ll pos;
            for(pos = i + 2; pos < N; pos += 2) {
                if(A[pos] == i + 1) break;
            }
            while(A[i] != i + 1 && i < pos) {
                ll tmp = A[pos];
                A[pos] = A[pos-2];
                A[pos-2] = tmp;
                str += "B " + to_string(pos - 1) + "\n";
                ans += 1;
                pos -= 2;
            }
        }
    }
    OUT(ans);
    cout << str;  
}