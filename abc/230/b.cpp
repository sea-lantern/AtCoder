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

    string S;
    cin >> S;
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j <= (int)S.size(); j++){
			if(j == (int)S.size()){
				cout << "Yes" << endl;
				return 0;
			}
			if(S[j] != T[i+j]) break; 
		}
	}
	cout << "No" << endl;
}