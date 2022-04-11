#include "iostream"
#include "climits"
#include "list"
#include "queue"
#include "stack"
#include "set"
#include "functional"
#include "algorithm"
#include "string"
#include "map"
#include "unordered_map"
#include "unordered_set"
#include "iomanip"
#include "cmath"
#include "random"
#include "bitset"
#include "cstdio"
#include "numeric"
#include "cassert"
#include "ctime"

using namespace std;

constexpr long long int MOD = 1000000007;
//constexpr int MOD = 1000000007;
//constexpr int MOD = 998244353;
//constexpr long long int MOD = 998244353;
constexpr double EPS = 1e-12;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	string T = "oxxoxxoxxoxxoxxoxxoxxoxx";

    long long N, A, B;
    cin >> N >> A >> B;

	long long P, Q, R, S;
    cin >> P >> Q >> R >> S;

	vector<vector<int>> m(S - R + 1, vector<int>(Q - P + 1, 0));

	long long kmax = max(1 - A, 1 - B);
	long long kmin = max(N - A, N - B);

	for(long long k = kmax; k <= kmin; k++){
		break;
		if(P <= A + k && A + k <= Q){
			if(R <= B + k && B + k <= S) m[B + k][A + k] = 1;
			else if(R <= B - k && B - k <= S) m[B - k][A + k] = 1;
		}
	}


	for(long long i = R; i <= S; i++){
		for(long long j = P; j <= Q; j++){
			if((j-i == A-B) || (j-B == A-i)) m[i-R][j-P] = 1;
		}
	}

	for(long long j = 0; j < Q - P + 1; j++){
		for(long long i = 0; i < S - R + 1; i++){
			if(m[i][j] == 0) cout << '.';
			else cout << '#';
		}
		cout << endl;
	}
}