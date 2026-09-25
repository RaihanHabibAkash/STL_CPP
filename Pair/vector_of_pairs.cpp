#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<pair<int,char>> students;
    for(int i = 0; i < 3; i++) {
        int x; char y; cin >> x >> y;
        students.push_back({x, y});

        // students.push_back(make_pair(x,y));
    }

    for(auto [x, y] : students)
        cout << x << " " << y << endl;

    return 0;
}