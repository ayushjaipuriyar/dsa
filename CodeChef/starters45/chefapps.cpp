#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int x, y, z, s;
    cin >> s >> x >> y >> z;
    if (z > s) {
      cout << 0 << endl;
    } else if (s - (x + y) >= z) {
      cout << 0 << endl;
    } else {
      if (s - y >= z || s - x >= z) {
        cout << 1 << endl;
      } else {
        cout << 2 << endl;
      }
    }
  }
}
