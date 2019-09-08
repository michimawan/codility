#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
  vector<int> a, b;
  int n, m,  k;
  cin >> n;
  m = n;
  while(n--) {
    cin >> k;
    a.push_back(k);
  }
  while(m--) {
    cin >> k;
    b.push_back(k);
  }


  stack<int> upFish;
  stack<int> downFish;
  int downstreamFishPos = -1;
  for(int i=0; i<a.size(); i++) {
    if (b[i] == 0) {
      if (downFish.empty()) {
        upFish.push(i);
      } else {
        if (a[downFish.top()] < a[i]) {
          downFish.pop();
          while(!downFish.empty()) {
            int tmpDownFish = downFish.top();
            if (a[tmpDownFish] < a[i]) {
              downFish.pop();
            } else {
              // upFish fail to swipe all downFish
              break;
            }
          }
          if (downFish.empty()) {
            upFish.push(i);
          }
        }
      }

    } else {
      downFish.push(i);
    }
  }

  cout << upFish.size() + downFish.size() << endl;

  return 0;
}
