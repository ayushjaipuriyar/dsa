#include <bits/stdc++.h>

using namespace std;

void forRow1(int n, int m) {
  for (int i = 0; i < m; i++) {
    cout << i + 1 << " " << endl;
  }
  int commonDif = n + 2;
  for (int i = 1; i < n; i++) {
    int max = commonDif;
    cout << max << " ";
    for (int j = 1; j < m; j++) {
      cout << max + i + 1 << " ";
      max += i + 1;
    }
  }
}

void forRow2(int n, int m) {
  int sum = 0;
  for (int i = 0, a = m + 1; i < n; i++, a++) {
    sum = i + 1;
    cout << sum << " ";
    for (int j = 1; j < m; j++) {
      cout << sum + a << " ";
      sum += a;
    }
    cout << endl;
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    if (n < m)
      forRow1(n, m);
    else
      forRow2(n, m);
  }
}
