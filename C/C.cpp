#include <iostream>
#include <cstdio>
#include <complex>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <unordered_set>
#include <unordered_map>
#include <list>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;

typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;

#define REP(i, begin, end) for (auto i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define F0R(i, end) FOR(i, 0, end)
#define FOR(i, begin, end) for(auto (i) = (begin); (i) < (end); (i)++)
#define TR(it, begin, end) for (auto it = (begin); (it) != (end); (it)++) // for stl containers

#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define present(c,x) ((c).find(x) != (c).end())   // map and set
#define cpresent(c,x) (find(all(c),x) != (c).end()) // containers
#define tr1(x)                cout << #x << ": " << x << endl;
#define tr2(x, y)             cout << #x << ": " << x << " | " << #y << ": " << y << endl;
#define tr3(x, y, z)          cout << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << endl;
#define tr4(a, b, c, d)       cout << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << endl;
#define tr5(a, b, c, d, e)    cout << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << endl;
#define tr6(a, b, c, d, e, f) cout << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << " | " << #f << ": " << f << endl;

namespace io {
	template<typename Test, template<typename...> class Ref>
	struct is_specialization : std::false_type {};

	template<template<typename...> class Ref, typename... Args>
	struct is_specialization<Ref<Args...>, Ref> : std::true_type {};
	// https://stackoverflow.com/questions/16337610/how-to-know-if-a-type-is-a-specialization-of-stdvector

	void setIn(string s) { freopen(s.c_str(), "r", stdin); }
	void setOut(string s) { freopen(s.c_str(), "w", stdout); }
	void setIO(string s = "") {
		ios_base::sync_with_stdio(0); cin.tie(0);
		if (sz(s)) { setIn(s + ".in"), setOut(s + ".out"); }
	}

	// INPUT
	// double input seems slow on CF
	void re(double& x) { string t; cin >> t; x = stod(t); }
	void re(ld& x) { string t; cin >> t; x = stold(t); }
	template<class T> void re(T& x) { cin >> x; }
	template<class Arg, class... Args> void re(Arg& first, Args&... rest) {
		re(first); re(rest...);
	}
	template<class T1, class T2> istream& operator>>(istream& is, pair<T1, T2>& p) {
		is >> p.fi >> p.se; return is;
	}
	template<class T> istream& operator>>(istream& is, vector<T>& a) {
		REP(i, 0, sz(a)) is >> a[i];
		return is;
	}

	// OUTPUT
	template<class T> void pr(const T& x) { cout << x << '\n'; }
	template<class Arg, class... Args> void pr(const Arg& first, const Args&... rest) {
		cout << first << ' '; pr(rest...);
	}
	template<class T1, class T2> ostream& operator<<(ostream& os, const pair<T1, T2>& a) {
		os << '{' << a.fi << ", " << a.se << '}'; return os;
	}
	template<class K, class V> ostream& operator<<(ostream& os, const map<K, V>& m) {
		os << '{';
		TR(it, m.begin(), m.end()) {
			os << ", "[it == m.begin()] << *it;
		}
		os << " }";
		return os;
	}
	template<class T> ostream& operator<<(ostream& os, const set<T>& s) {
		os << '{';
		TR(it, s.begin(), s.end()) {
			os << ", "[it == s.begin()] << *it;
		}
		os << " }";
		return os;
	}
	template<class T> ostream& operator<<(ostream& os, const vector<T>& a) {
		os << '[';
		REP(i, 0, sz(a)) {
			if (i) {
				os << ", ";
				if (is_specialization<T, vector>::value) os << '\n';
			}
			os << a[i];
		}
		os << ']';
		return os;
	}
}
using namespace io;

inline void prep() {
	ios::sync_with_stdio(0);
	cin.tie(0);
#ifdef LOCAL
	freopen("../__in.txt", "r", stdin);
	freopen("../__out.txt", "w", stdout);
#endif
}

void solve();

int main() {
	prep();
	int t = 1;
	//re(t);
	while (t--) {
		solve();
	}
	return 0;
}

const int MOD = 1000000007;
const int MX = 55;

// Actual solution

void solve()
{
}