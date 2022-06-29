#include <bits/stdc++.h>
#include <map>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];
    map<int, int> count;
    int max_cnt = 0;
    for (auto i : arr) {
      count[i]++;
      max_cnt = max(max_cnt, count[i]);
    }
    cout << n - max_cnt << endl;
  }
}
