#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

void solve() {
  int a, b, c;
  cin >> a >> b >> c;
  if(2>(a+b+c)){
    cout << "Water filling time" << endl;
    return;
  }
  cout << "Not now" << endl;
}

int main() {
  FAST_IO;
  int T; cin >> T;while(T--)
    solve();
  return 0;
}