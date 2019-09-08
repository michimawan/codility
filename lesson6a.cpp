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
  sort(v.begin(), v.end());

  int size = v.size();
  int result = v[size - 1] * v[size - 2] * v[size - 3];
  if (v[0] < 0 && v[1] < 0) {
    for(int i=size - 1; i>=0; i--) {
      int tmp = v[0] * v[1] * v[i];
      if (tmp > result) {
        result = tmp;
      }
    }
  }

  cout << result << endl;

  return 0;
}
