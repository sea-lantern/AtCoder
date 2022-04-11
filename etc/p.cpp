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
    /*-------------------2文探索(binary search)-------------------*/
    // okはみたす
    // ngはみたさない
    int ok = 0, ng = INF;
    while(1 < ng - ok){
        int m = (ok + ng) / 2;
        if("mで満たした") ok = m;
        else ng = m;
    }
    OUT(ok);
}