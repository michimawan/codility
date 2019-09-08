#include <iostream>
#include <map>
#include <vector>
#include <stdlib.h>

using namespace std;

int main()
{
  // 2, 1000 -1000 => 2000
    vector<int> v;
    int n, k;
    cin >> n;
    while(n--) {
        cin >> k;
        v.push_back(k);
    }

    int minDiff = 9999999;
    int rightSum = 0;
    for(int i=v.size() - 1; i >= 0; i--) {
      rightSum += v[i];
    }

    rightSum -= v[0];
    int leftSum = 0;
    for(int i=0; i<v.size() - 1; i++) {
      leftSum += v[i];
      int diff = abs(leftSum - rightSum);
      if (minDiff > diff) {
        minDiff = diff;
      }
      rightSum -= v[i + 1];
    }

    cout << minDiff << endl;

    return 0;
}
