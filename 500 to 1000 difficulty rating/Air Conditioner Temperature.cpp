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
  int alice, bob, charlie;
  cin >> alice >> bob >> charlie;
  if (alice <= bob && charlie <= bob)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
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