#include <algorithm>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string str;
    cin >> str;
    for (int i = 1; i < n; i++) {
      if ((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') ||
          (str[i] == 'o') || (str[i] == 'u')) {
        reverse(str.begin(), str.begin() + i);
        // cout << temp << "\t" << end << endl;
      }
    }
    cout << str << endl;
  }
}
