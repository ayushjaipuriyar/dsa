#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n], z = 0, c = 0;
    for (int i = 0; i < n; i++)
      cin >> arr[n];
    for (int i = 0; i < n; i++) {
      z += arr[i];
      if (arr[i] == 1)
        c++;
    }
    if (c > 0)
      cout << "CHEF" << endl;
    if (z % 2 == 0)
      cout << "CHEFINA" << endl;
    else
      cout << "CHEF" << endl;
  }
}
