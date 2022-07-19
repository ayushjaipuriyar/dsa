#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, count = 0;
    string str;
    cin >> n >> str;
    for (int i = 0; i < n; i++) {
      if (count > 3)
        break;

      if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||
          str[i] == 'u')
        count = 0;
      else
        count++;
    }
    if (count > 3)
      cout << "NO" << endl;
    else
      cout << "YES" << endl;
  }
}
