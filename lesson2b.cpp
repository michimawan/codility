#include <iostream>
#include <map>
#include <vector>

using namespace std;

void printVector(vector<int> v) {
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i];
    }
}

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    int K = 3;

    if (K == v.size()) {
        printVector(v);
        // return v;
    }

    if (v.size() == 0) {
        printVector(v);
        // return v;
    }

    for (int i = 0; i < K; ++i) {
        v.insert(v.begin(), v[v.size() - 1]);
        v.pop_back();
    }

    printVector(v);
    // return v;
    return 0;
}