#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    if (x != a && y != b)
      cout << 1 << endl;
    else
      cout << 2 << endl;
  }
}
