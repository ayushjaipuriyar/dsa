#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int x, y, z;
    cin >> x >> y >> z;
    if (x % 3 == 0) {
      cout << (x * y) + (floor((x - 1) / 3) * z) << endl;
    } else
      cout << (x * y) + (floor(x / 3) * z) << endl;
  }
}
