#include <bits/stdc++.h>
using namespace std;
#define FAST_IO                \
  ios::sync_with_stdio(false); \
  cin.tie(nullptr);
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
const ll mod = 1e9 + 7;

void solve()
{
  int children, candies;
  cin >> children >> candies;
  if (children < candies)
  {
    cout << 0 << endl;
    return;
  }
  int cnt = 0;
  while (children > candies)
  {
    candies += 4;
    cnt++;
  }
  cout << cnt << endl;
}

int main()
{
  FAST_IO;
  int T;
  cin >> T;
  while (T--)
    solve();
  return 0;
}