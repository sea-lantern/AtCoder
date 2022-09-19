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
    cin >> N;

    ll b[6][2] = {{-1, -1},
                    {-1,  0},
                    { 0, -1},
                    { 0, +1},
                    {+1,  0},
                    {+1, +1}};

    UnionFind uf(N);

    map<ll, ll> mp;
    REP(i, N) {
        ll x, y;
        cin >> x >> y;
        ll k = (x + 1000) * 10000 + y + 1000;

        mp[k] = i + 1;
        REP(j, 6) {
            ll nx = x + b[j][0];
            ll ny = y + b[j][1];

            ll nk = (nx + 1000) * 10000 + ny + 1000;

            if(mp[nk] != 0) {
                uf.unite(mp[nk] - 1, i);
            }
        }
    }

    set<ll> st;
    REP(i, N) st.insert(uf.find(i));
    OUT(st.size());
}