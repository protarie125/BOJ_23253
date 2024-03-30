#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vd = vector<double>;
using vii = vector<pii>;
using vll = vector<pll>;
using vs = vector<string>;

using vvb = vector<vb>;
using vvi = vector<vi>;
using vvl = vector<vl>;
using vvd = vector<vd>;

ll n, m;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n >> m;

  auto is_done = false;
  for (auto i = 0; !is_done && i < m; ++i) {
    ll k;
    cin >> k;

    auto s = stack<ll>{};
    while (0 < (k--)) {
      ll x;
      cin >> x;

      if (s.empty()) {
        s.push(x);
        continue;
      }

      if (s.top() < x) {
        cout << "No\n";
        is_done = true;
        break;
      }

      s.push(x);
    }
  }

  if (!is_done) {
    cout << "Yes\n";
  }

  return 0;
}