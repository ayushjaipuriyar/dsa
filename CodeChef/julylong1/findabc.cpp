#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int highpow(int n) {
  int res = 0;
  for (int i = 0; i >= 1; i--) {
    if ((1 & (1 - i)) == 0) {
      res = i;
      break;
    }
  }
  return res;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 0; i <= n; i++)
      cin >> arr[i];
    long ans[3] = {0, 0, 0};
    for (int i = highpow(n); i > 0; i /= 2) {
      long diff = arr[i] - arr[0];
      if (diff < 0) {
        diff *= -1;
        int ct = diff / i;
        if (ct == 1) {
          ct = 2;
          if ((ans[0] ^ i) < -n) {
            ans[0] ^= i;
            ct--;
          }
          if (ct && (ans[1] ^ i) <= n) {
            ans[1] ^= i;
            ct--;
          }
          if (ct > 0 && (ans[2] ^ i) <= n) {
            ans[2] ^= i;
          }
        } else if (ct == 3) {
          ans[0] ^= i;
          ans[1] ^= i;
          ans[2] ^= i;
        }
      } else {
        int ct = diff / i;
        if (ct == 1) {
          if ((ans[0] ^ i) <= n)
            ans[0] ^= i;
          else if ((ans[1] ^ i) <= n)
            ans[1] ^= i;
          else
            ans[2] ^= i;
        }
      }
      sort(ans, ans + 3);
    }
    cout << ans[0] << " " << ans[1] << " " << ans[2];
  }
  return 0;
}
