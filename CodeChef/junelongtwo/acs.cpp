#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int count = 0;
    count = n / 100;
    count += n % 100;
    if (count > 10)
      cout << -1 << endl;
    else
      cout << count << endl;
  }
}
