#include <bits/stdc++.h>
// #include <iostream>
#include <string>
using namespace std;

int main() {
  // your code goes here
  int t;
  cin >> t;
  while (t--) {
    string str, res;
    int n, c = 1;
    cin >> n;
    cin >> str;
    for (int i = 1; i < n; i++) {
      if (str[i - 1] != str[i]) {
        if (c != 1) {
          c++;
          res = "YES";
        } else {
          res = "NO";
        }
      } else {
        string temp;
        reverse(temp.begin(), temp.begin() + 2 * i);
        cout << str << "\t" << temp;
        if (temp == str)
          res = "YES";
        else
          res = "NO";
      }
    }
    c--;
    cout << res << endl;
  }
  return 0;
}
