#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
  string s;
  cin >> s;

  stack<char> st;

  for(int i=0; i<s.length(); i++) {
    if (s[i] == '(') {
      st.push(s[i]);
    } else {
      if (!st.empty() && s[i] == ')' && st.top() == '(') {
        st.pop();
      } else {
        st.push(s[i]);
      }
    }
  }

  if (st.empty()) {
    cout << 1 << endl;
    return 1;
  } else {
    cout << 0 << endl;
    return 0;
  }

  return 0;
}
