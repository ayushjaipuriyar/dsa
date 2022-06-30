#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, s = 0;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
      cin >> b[i];
      s += b[i];
    }
    for (int i = 0; i < n; i++)
      cout << b[i] - s / (n + 1) << " ";
    cout << endl;
  }
}
