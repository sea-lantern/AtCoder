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

struct unionfind{
    vector<int> data;
 
    unionfind(int N) : data(N, -1){}

    int find(int k){ return data[k] < 0 ? k: data[k] = find(data[k]);}

    bool unite(int x, int y){
        if ((x = find(x)) == (y = find(y))) return false;
        if (size(x) < size(y)) swap(x, y);
        data[x] += data[y];
        data[y] = x;
        return true;
    }

    bool same(int x, int y){ return find(x) == find(y);}

    int size(int x){ return -data[find(x)];}
};

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
    int N, M;
    cin >> N >> M;

    unionfind uf(N);
    VI cnt(N, 0);
    REP(i, M){
        int a, b;
        cin >> a >> b;
        a--; b--;
        if(!uf.unite(a, b) || (++cnt[a]) == 3 || (++cnt[b]) == 3){
            OUT("No");
            return 0;
        }
    }

    OUT("Yes");
}