#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, x;
    cin >> n >> x;
    if (n < x)
      cout << 0 << endl;
    else {
      float res = n - x;
      cout << ceil(res / 4) << endl;
    }
  }
}
