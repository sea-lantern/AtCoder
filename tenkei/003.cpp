#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> P;
typedef vector<ll> VI;
typedef vector<VI> VVI;
#define REP(i,n) for(ll i=0;i<(n);i++)
#define ALL(v) v.begin(),v.end()
#define OUT(n) cout << n << "\n"
constexpr ll MOD=998244353;
constexpr ll INF=2e18;

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
    int N;
    cin >> N;

    VVI L(N);
    REP(i, N-1){
        int a, b;
        cin >> a >> b;
        a--; b--;
        L[a].push_back(b);
        L[b].push_back(a);
    }

    queue<int> q;

    int s = 0;
    VI dist1(N, -1);
    dist1[s] = 0;
    q.push(s);
    while(!q.empty()){
        s = q.front(); q.pop();
        for(auto l: L[s]){
            if(dist1[l] != -1) continue;
            dist1[l] = dist1[s] + 1;
            q.push(l);
        }
    }

    VI dist2(N, -1);
    dist2[s] = 0;
    q.push(s);
    while(!q.empty()){
        s = q.front(); q.pop();
        for(auto l: L[s]){
            if(dist2[l] != -1) continue;
            dist2[l] = dist2[s] + 1;
            q.push(l);
        }
    }

    OUT(dist2[s]+1);
}