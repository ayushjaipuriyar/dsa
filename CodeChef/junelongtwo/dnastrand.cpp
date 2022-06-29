#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int z;
    cin >> z;
    string str, ans = "";
    cin >> str;
    int i = 0;
    while (i < z) {
      switch (str[i]) {
      case 'A':
        ans += 'T';
        break;
      case 'T':
        ans += 'A';
        break;
      case 'C':
        ans += 'G';
        break;
      case 'G':
        ans += 'C';
        break;
      }
      i++;
    }
    cout << ans << endl;
  }
}
