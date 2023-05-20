#include <vector>
#include <queue>

using namespace std;

int kth_largest(vector<int> values, int k){
    // create a priority storing from smallest to largest
    priority_queue<int ,vector<int>, greater<int> > m;
    // push value to an array according to int k
    for (int value : values) {
    m.push(value);
    // if size is bigger than k, delete the smallest number
    if (m.size() > k) {
      m.pop();
    }
  }
  // return the largest no
  return m.top();
}
