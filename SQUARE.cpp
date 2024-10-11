#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        vector<vector<int>> corners(4, vector<int>(2));
        for (int j = 0; j < 4; ++j) {
            cin >> corners[j][0] >> corners[j][1];
        }

        sort(corners.begin(), corners.end());
        int side_length = corners[2][0] - corners[0][0];
        int area = side_length * side_length;

        cout << area << endl;
    }

    return 0;
}
