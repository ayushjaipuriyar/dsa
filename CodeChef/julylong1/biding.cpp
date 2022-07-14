#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b, c;
    cin >> a >> b >> c;
    int res = max(max(a, b), max(b, c));
    if (res == a)
      cout << "Alice" << endl;
    else if (res == b)
      cout << "Bob" << endl;
    else if (res == c)
      cout << "Charlie" << endl;
  }
}
