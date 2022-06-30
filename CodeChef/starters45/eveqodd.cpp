#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, ce = 0, co = 0;
    cin >> n;
    long long arr[2 * n];
    for (int i = 0; i < 2 * n; i++) {

      cin >> arr[i];
      if (arr[i] % 2 == 0)
        ce++;
      else
        co++;
    }
    if (co == ce)
      cout << 0 << endl;
    else
      cout << abs(co - ce) / 2 << endl;
  }
}
