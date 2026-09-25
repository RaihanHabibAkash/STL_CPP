#include <bits/stdc++.h>
using namespace std;

int main() {
    pair<string, int> students[3];

    for(int i = 0; i < 3; i++)  cin >> students[i].first >> students[i].second;

    for(int i = 0; i < 3; i++)
        cout << students[i].first << " " << students[i].second << endl;

    for(auto [x, y] : students)
        cout << x << " " << y << endl;
    
    return 0;
}