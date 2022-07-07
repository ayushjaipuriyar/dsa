#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string str;
    int n;
    cin >> n;
    cin >> str;
    int count = 0;
    for (int i = 0; i < n - 1; i++)
      if (str[i] == '1' && str[i + 1] == '0')
        count++;
    cout << count << endl;
  }
}
