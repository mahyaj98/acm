#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef vector<vii> vvii;
typedef set<int> si;
typedef vector<si> vsi;
typedef pair<double, double> dd;

const int inf = 1e9;

ll solve(ll n) {
	if (n == 0) return 0;
	return solve(n / 2) + (n % 2);
}

int main() {
	ios::sync_with_stdio(false);

	int t; cin >> t;
	while (t--) {
		ll n; cin >> n;
		cout << solve(n) << endl;
	}

	return 0;
}
