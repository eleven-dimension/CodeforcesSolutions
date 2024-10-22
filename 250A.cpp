#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int folder_index = 0;
  vector<int> file_num_per_folder(n + 1);
  int negative_cnt = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] >= 0) {
      file_num_per_folder[folder_index]++;
    } else {
      if (negative_cnt == 2) {
        negative_cnt = 1;
        file_num_per_folder[++folder_index]++;
      } else {
        file_num_per_folder[folder_index]++;
        negative_cnt++;
      }
    }
  }

  cout << folder_index + 1 << endl;
  for (int i = 0; i <= folder_index; i++) {
    cout << file_num_per_folder[i] << " ";
  }
}