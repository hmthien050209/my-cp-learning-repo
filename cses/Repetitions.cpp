#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using db = double;
#define endl "\n"
void unsync() { ios::sync_with_stdio(0); cin.tie(nullptr); }
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
void fileio(string inputFile, string outputFile = "") { if(fopen(inputFile.c_str(), "r")) { freopen(inputFile.c_str(), "r", stdin); if (outputFile != "") freopen(outputFile.c_str(), "w", stdout); } }


int main() {
    unsync();
    string s; cin >> s;
    ll res = 1, cnt = 0;
    ll n = (ll)s.length();
    char c = 'A';
    for (int i = 0; i < n; ++i) {
        if (s[i] == c) {
            ++cnt;
            res = max (res, cnt);
        }
        else {
            c = s[i];
            cnt = 1;
        }
    }
    cout << res << endl;
    return 0;
}