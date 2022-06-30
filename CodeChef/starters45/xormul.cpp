#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, a, b;
    cin >> n >> a >> b;
    int x = 0, prefer = -1;
    for (int i = n - 1; i >= 0; i--) {
      if (((1 << i) & a) > 0 && ((1 << i) & b) > 0)
        continue;
      else if (((1 << i) & a) == 0 && ((1 << i) & b) == 0)
        x |= (1 << i);
      else {
        if (prefer == -1) {
          if (((1 << i) & a) == 0 && ((1 << i) & b) > 0)
            prefer = 0;
          else {
            prefer = 0;
            x |= (1 << i);
          }
        } else {
          if (((1 << i) & a) == 0 && ((1 << i) & b) > 0)
            x |= (1 << i);
        }
      }
    }
    cout << x << endl;
  }
}
