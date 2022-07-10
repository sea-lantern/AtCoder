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

/*-------------------UnionFind-------------------*/
struct UnionFind{
    vector<int> data;
 
    UnionFind(int N) : data(N, -1){}

    int find(int k){ return data[k] < 0 ? k: data[k] = find(data[k]);}

    bool unite(int x, int y){
        if ((x = find(x)) == (y = find(y))) return false;
        if (data[x] > data[y]) swap(x, y);
        data[x] += data[y];
        data[y] = x;
        return true;
    }

    int size(int k){ return -data[find(k)];}

    bool same(int x, int y){ return find(x) == find(y);}
};

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    ll N;
    ll sx, sy, tx, ty;
    cin >> N >> sx >> sy >> tx >> ty;

    VVI O(N, VI(3));

    REP(i, N) cin >> O[i][0] >> O[i][1] >> O[i][2];

    UnionFind uf(N);

    VI s, e;

    REP(i, N){
        REP(j, N){
            ll d = (O[i][0] - O[j][0]) * (O[i][0] - O[j][0]) + (O[i][1] - O[j][1]) * (O[i][1] - O[j][1]);
            if(d >= (O[i][2] - O[j][2]) * (O[i][2] - O[j][2]) && d <= (O[i][2] + O[j][2]) * (O[i][2] + O[j][2])) uf.unite(i, j);
        }
        ll ds = (O[i][0] - sx) * (O[i][0] - sx) + (O[i][1] - sy) * (O[i][1] - sy);
        if(ds == O[i][2] * O[i][2]) s.push_back(i);

        ll de = (O[i][0] - tx) * (O[i][0] - tx) + (O[i][1] - ty) * (O[i][1] - ty);
        if(de == O[i][2] * O[i][2]) e.push_back(i);
    }

    for(auto si: s){
        for(auto ei: e){
            if(uf.same(si, ei)) {
                OUT("Yes");
                return 0;
            }
        }
    }
    
    OUT("No");
}