#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
  int n, input;
  vector<int> v;

  cin >> n;

  while(n--) {
    cin >> input;
    v.push_back(input);
  }

  if (v.size() < 3) {
    cout << 0 << endl;
    return 0;
  }

  sort(v.begin(), v.end());

  // p < q < r
  //A[P] + A[Q] > A[R],
  //A[Q] + A[R] > A[P],
  //A[R] + A[P] > A[Q].
  for(int i=0; i<v.size(); i++) {
    if (v[i] >= 0 && v[i] > v[i+2] - v[i+1]) {
      cout << 1 << endl;
      return 1;
    }
  }
  cout << 0 << endl;

  return 0;
}
