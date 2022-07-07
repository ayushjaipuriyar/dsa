#include <bits/stdc++.h>
using namespace std;
void sort(int n, int *ptr) {
  int i, j, t;
  // Sort the numbers using pointers
  for (i = 0; i < n; i++) {

    for (j = i + 1; j < n; j++) {
      if (*(ptr + j) < *(ptr + i)) {
        cout << i << "\t" << j << endl;
        t = *(ptr + i);
        *(ptr + i) = *(ptr + j);
        *(ptr + j) = t;
      }
    }
  }
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[n];
    sort(n, arr);
  }
}
