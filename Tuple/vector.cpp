#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<tuple<string, int, char>> student;
    for(int i = 0; i < 3; i++) {
        string s; int val; char c;
        cin >> s; cin >> val; cin >> c;
        student.push_back({s, val, c});
        // student.push_back(make_tuple(s, val, c));
    }

    for(int i = 0; i < 3; i++)
        cout << get<0>(student[i]) << " " << get<1>(student[i]) << " " << get<2>(student[i]) << endl;
    
    return 0;
}