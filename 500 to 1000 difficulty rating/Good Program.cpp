#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

void solve() {
  int n;
  cin >> n;
  cout << (n % 4 == 0 ? "Good" : "Not Good") << endl;
}

int main() {
  FAST_IO;
  int T; cin >> T;while(T--)
    solve();
  return 0;
}