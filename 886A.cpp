#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> a(6);
  int sum = 0;
  for (int i = 0; i < 6; i++) {
    cin >> a[i];
    sum += a[i];
  }
  for (int i = 0; i < 6; i++) {
    for (int j = i + 1; j < 6; j++) {
      for (int k = j + 1; k < 6; k++) {
        if (sum - a[i] - a[j] - a[k] == a[i] + a[j] + a[k]) {
          cout << "yes" << endl;
          return 0;
        }
      }
    }
  }
  cout << "no" << endl;
}