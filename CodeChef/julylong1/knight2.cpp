#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int p1 = (a + b) & 1;
    int p2 = (c + d) & 1;
    if (p1 == p2)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
}
