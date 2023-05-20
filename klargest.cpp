#include <vector>
#include <queue>
using namespace std;

int kth_largest(vector<int> values, int k){
    // using priority sorting from low to high
    priority_queue<int ,vector<int>, greater<int> > m;
    // push the number of values according to int k
    for (int value : values) {
    m.push(value);
    }
    // return the largest
  return m.top();
}
