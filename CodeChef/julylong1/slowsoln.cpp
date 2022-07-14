#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int maxT, maxN, sumN;
    cin >> maxT >> maxN >> sumN;
    long long curn = 0, ans = 0;
    for (int i = 0; i < maxT; i++) {
      if (curn + maxN <= sumN) {
        ans += pow(maxN, 2);
        curn += maxN;
      } else {
        if (curn != sumN)
          ans += pow((sumN - curn), 2);
        break;
      }
    }
    cout << ans << endl;
  }
}
