#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int lcm(int n, int m) { return ((n * m) / __gcd(n, m)); }

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n, count = 0;
    cin >> n;
    for (int i = 1; i < n; i++) {
      for (int j = 1; j < n; j++) {
        long long l = lcm(i, j) * lcm(i, j);
        long long sum = (i * i) + (j * j) + __gcd(i, j) * __gcd(i, j) + l;
        // cout << endl << endl << "\t\t" << sum << endl << endl;
        if (sum == n) {
          count++;
        }
      }
    }
    cout << count << endl;
  }
}
