#include <bits/stdc++.h>
#include <vector>

using namespace std;

long long findGCD(vector<long long> arr) {
  sort(arr.begin(), arr.end());
  long long n = arr.size(), result = arr[n - 1];
  for (int i = n - 2; i >= 0; i--) {
    result = __gcd(arr[i], result);
    if (result == 1)
      return 1;
  }
  return result;
}

int increase(long long a[], long long l[], int n, int i) {
  if (i == 0)
    return l[1];
  if (i == n - 1)
    return a[n - 2];
  return __gcd(a[i - 1], l[i + 1]);
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<long long> a;
    long long x;
    for (int i = 0; i < n; i++) {
      cin >> x;
      a.push_back(x);
    }
    if (findGCD(a) > 1) {
      cout << n << endl;
      continue;
    }
    int ans = 0;
    long long m[n], l[n];
    m[0] = a[0];
    l[n - 1] = a[n - 1];
    for (int i = 1, j = n - 2; i < n; i++, j--) {
      m[i] = __gcd(a[i], m[i - 1]);
      l[j] = __gcd(a[j], l[j + 1]);
    }
    for (int i = 0; i < n; i++) {
      if (increase(m, l, n, i) > 1) {
        ans++;
      }
    }
    cout << ans << endl;
  }
}
