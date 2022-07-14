#include <bits/stdc++.h>
#include<stdio.h>
#include<iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int arr[n];
    int atk = 0, def = 0;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
      if ((arr[i] == 500) && atk == 0) {
        atk += arr[i];
      } else if ((arr[i] == 500) && def == 0) {
        def += arr[i];
      } else if (arr[i] >= 500) {
        atk += arr[i];
      } else {
        def += (1000 - arr[i]);
      }
    }
    long long ans = atk * def;
    cout << ans << endl;
  }
}
