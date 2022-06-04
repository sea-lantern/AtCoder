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

ll gcd(ll a, ll b){
  if(a%b == 0){
    return b;
  }else{
    return gcd(b, a%b);
  }
}

ll lcm(ll a, ll b){
  return a*b / gcd(a, b);
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    ll N, A, B;
    cin >> N >> A >> B;

    ll t = lcm(A, B);
    ll ans = N * (N + 1) - A * (N / A) * (N / A + 1) - B * (N / B) * (N / B + 1) + t * (N / t) * (N / t + 1);
    
    OUT(ans / 2);
}