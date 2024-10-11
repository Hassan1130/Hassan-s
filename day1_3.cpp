#include<bits/stdc++.h>
using namespace std;

int main() {
    string time;
    cin >> time;
    int len = time.size();

    if (time[len-2] == 'A') {
        if (time.substr(0, 2) == "12") {
            time[0] = '0';
            time[1] = '0';
        }
        for (int i = 0; i < len - 2; i++) {
            cout << time[i];
        }
    }
    else if (time[len-2] == 'P') {
        if (time.substr(0, 2) != "12") {
            time[0] += 1;
            time[1] += 2;
        }
        for (int i = 0; i < len - 2; i++) {
            cout << time[i];
        }
    }
}
