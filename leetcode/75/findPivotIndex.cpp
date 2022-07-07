#include <bits/stdc++.h>

using namespace std;

int pivotIndex(vector<int> &nums) {
  int lsum = 0, rsum = 0;
  for (int i = 0; i < nums.size(); i++) {
    cout << i << endl;
    for (int j = 0; j < i; j++)
      lsum += nums[j];
    cout << "lsum :" << lsum << endl;
    for (int j = i + 1; j < nums.size(); j++)
      rsum += nums[j];
    cout << "rsum :" << rsum << endl;
    if (lsum == rsum)
      return i;
    lsum = 0;
    rsum = 0;
  }
  return 0;
}

int main() {

  vector<int> num{1, 7, 3, 6, 5, 6};
  int res = pivotIndex(num);
  cout << res;
}
