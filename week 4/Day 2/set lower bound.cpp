#include <iostream>
#include <set>

using namespace std;

int main() {
  set<int> s;
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int k;
    cin >> k;
    s.insert(k);
  }

  int element;
  cin >> element;

  // Find the iterator to the element in the set.
  auto it = s.find(element);

  // If the element was found, get its index.
  int d;
  if (it != s.end()) {
    d = distance(s.begin(), it);
  }

  cout << d;
  return 0;
}
