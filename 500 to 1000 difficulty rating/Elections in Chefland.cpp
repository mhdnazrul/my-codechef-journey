#include <bits/stdc++.h>
using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

void solve() {
  int n, k, cnt = 0;
  cin >> n >> k;
  for (int i = 0; i < n;++i){
    int tp;
    cin >> tp;
    if(tp>=k)
      cnt++;
  }
  cout << cnt << endl;
  return;
}

int main() {
  FAST_IO;
  int T; cin >> T;while(T--)
    solve();
  return 0;
}