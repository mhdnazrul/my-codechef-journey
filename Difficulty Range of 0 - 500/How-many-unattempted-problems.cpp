#include <iostream>
#include <vector>

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
  int a, b;
  cin >> a >> b;
  cout << a - b << endl;
}

int main()
{
  FAST_IO;
  solve();
  return 0;
}