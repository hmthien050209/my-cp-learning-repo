#include <bits/stdc++.h>
using namespace std;
// BEGIN MACROS
using ll = long long;
using db = double;
using vi = vector<int>;
using vll = vector<ll>;
using vii = vector<vi>;
using ii = pair<int, int>;
#define endl "\n"
#define pb push_back
void unsync() { ios::sync_with_stdio(0); cin.tie(nullptr); }
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
void fileio(string inputFile, string outputFile = "") { if(fopen(inputFile.c_str(), "r")) { freopen(inputFile.c_str(), "r", stdin); if (outputFile != "") freopen(outputFile.c_str(), "w", stdout); } }
// END MACROS


int main() {
    unsync();
    fileio("speeding.in", "speeding.out");
    int n, m; cin >> n >> m;
    int res = 0, pos = 1;
    vector<int> limits(101);
    for (int i = 0; i < n; ++i) {
        int seg, lim; cin >> seg >> lim;
        while(seg--) {
            limits[pos++] = lim;
        }
    }
    pos = 1;
    for (int i = 0; i < m; ++i) {
        int seg, spd; cin >> seg >> spd;
        while(seg--) {
            if (spd > limits[pos]) {
                res = max(res, spd - limits[pos]);
            }
            ++pos;
        }
    }
    cout << res << endl;
    return 0;
}