#include <iostream>
#include <vector>

using namespace std;

vector<int> solve(int k, int n) {
  vector<int> array;
  for (int i = 1; i <= n; i++) {
    if (array.size() < k) {
      array.push_back(i);
    } else {
      int max_diff = 0;
      int max_index = -1;
      for (int j = 0; j < array.size(); j++) {
        int diff = array[j] - array[j - 1];
        if (diff > max_diff) {
          max_diff = diff;
          max_index = j;
        }
      }
      array[max_index] = i;
    }
  }
  return array;
}

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    int k, n;
    cin >> k >> n;
    vector<int> array = solve(k, n);
    for (int j = 0; j < array.size(); j++) {
      cout << array[j] << " ";
    }
    cout << endl;
  }
  return 0;
}
