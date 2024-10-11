
#include <iostream>
#include <algorithm>

using namespace std;

int findMinDistance(int x1, int x2, int x3) {
  vector<int> points = {x1, x2, x3};
  sort(points.begin(), points.end());
  int median = points[1];
  if (points[1] == points[2]) {
    return abs(points[0] - median) + abs(points[2] - median);
  } else {
    return abs(points[0] - median) + abs(points[2] - median);
  }
}

int main() {
  int t;
  cin >> t;
  for (int i = 0; i < t; ++i) {
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    int minDistance = findMinDistance(x1, x2, x3);
    cout << minDistance << endl;
  }
  return 0;
}
