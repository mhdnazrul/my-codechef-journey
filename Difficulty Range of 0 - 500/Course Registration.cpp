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
  int enroll = a + c;
  cout<<(enroll<=b?"YES":"NO")<<endl;
}

int main() {
  FAST_IO;
  int T; cin >> T;while(T--)
    solve();
  return 0;
}