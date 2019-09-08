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

  if (v.size() == 0) {
    return 0;
  }

  int currentValue = 1;
  int maxSize = v.size() + 1;

  sort(v.begin(), v.end());
  for(int i=0; i<v.size(); i++) {
    if (v[i] != currentValue) {
      break;
    }

    currentValue++;
  }

  if (currentValue != 1) {
    currentValue = maxSize;
  }

  cout << currentValue << endl;
  // return currentValue;

  return 0;
}
