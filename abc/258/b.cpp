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
constexpr ll INF=2e18;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    ll N;
    cin >> N;

    vector<string> A(N);

    REP(i, N) cin >> A[i];

    ll mx = 0;

    // yoko
    REP(i, N) {
        string S = "";
        REP(j, N) {
            S += A[i][j];
        }
        S += S;

        REP(j, N){
            ll n = stoll(S.substr(j, N));
            string sn = S.substr(j, N);
            reverse(ALL(sn));
            ll nn = stoll(sn);
            mx = max(n, mx);
            mx = max(nn, mx);
        }
    }


    // tate
    REP(i, N) {
        string S = "";
        REP(j, N) {
            S += A[j][i];
        }
        S += S;

        REP(j, N){
            ll n = stoll(S.substr(j, N));
            string sn = S.substr(j, N);
            reverse(ALL(sn));
            ll nn = stoll(sn);
            mx = max(n, mx);
            mx = max(nn, mx);
        }
    }

    // naname migi
    REP(i, N){
        string S = "";
        REP(j, N){
            S += A[j][(i + j) % N];
        }
        S += S;
        REP(j, N){
            ll n = stoll(S.substr(j, N));
            string sn = S.substr(j, N);
            reverse(ALL(sn));
            ll nn = stoll(sn);
            mx = max(n, mx);
            mx = max(nn, mx);
        }
    }
    // naname hidari
    REP(i, N){
        string S = "";
        REP(j, N){
            S += A[j][(N + i - j) % N];
        }
        S += S;
        REP(j, N){
            ll n = stoll(S.substr(j, N));
            string sn = S.substr(j, N);
            reverse(ALL(sn));
            ll nn = stoll(sn);
            mx = max(n, mx);
            mx = max(nn, mx);
        }
    }

    OUT(mx);
}