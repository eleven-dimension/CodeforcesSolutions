#include <algorithm>
#include <iostream>
#include <ranges>
#include <vector>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  if (k == 1) {
    cout << *ranges::min_element(a) << endl;
  } else if (k == 2) {
    auto max_iter = ranges::max_element(a);
    if (max_iter == a.begin() || max_iter == prev(a.end())) {
      cout << *max_iter << endl;
    } else {
      cout << max(a.back(), a.front()) << endl;
    }
  } else {
    cout << *ranges::max_element(a) << endl;
  }
}