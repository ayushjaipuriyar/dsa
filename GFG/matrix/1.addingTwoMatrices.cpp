#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<vector<int>> sumMatrix(const vector<vector<int>> &A,
                              const vector<vector<int>> &B) {
  int n1 = A.size();
  int m1 = A[0].size();
  int n2 = B.size();
  int m2 = B[0].size();

  vector<vector<int>> C;
  if (n1 != n2 || m1 != m2)
    return C;

  for (int i = 0; i < n1; i++) {
    vector<int> sum;
    for (int j = 0; j < m1; j++)
      sum.push_back(A[i][j] + B[i][j]);
    C.push_back(sum);
  }

  return C;
}
int main() {
  vector<vector<int>> A{{1, 2}, {3, 4}, {5, 6}}, B{{1, 3}, {3, 2}, {3, 3}}, sum;
  sum = sumMatrix(A, B);
}
