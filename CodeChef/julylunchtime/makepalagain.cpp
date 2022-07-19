#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

string minSwap(string s, int n) {
  int odd = 0, left = 0, right = n - 1, result = 0;
  if (odd > 1)
    return "NO";

  while (left < right) {
    int l = left, r = right;
    while (s[l] != s[r])
      r--;
    if (l == r) {
      swap(s[r], s[r + 2]);
      result++;
      continue;
    } else {
      while (r < right) {
        swap(s[r], s[r + 2]);
        result++;
        r++;
      }
    }
    left++, right--;
  }
  return "YES";
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    cout << minSwap(s, n) << endl;
  }
  return 0;
}
