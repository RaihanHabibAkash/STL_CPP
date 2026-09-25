#include <bits/stdc++.h>
using namespace std;

int main() {
    tuple<string, int, char> student[3];
    for(int i = 0; i < 3; i++) {
        string s; int val; char c;
        cin >> s >> val >> c;
        student[i] = {s,val,c};
    }

    for(int i = 0; i < 3; i++)
        cout << get<0>(student[i]) << " " << get<1>(student[i]) << " " << get<2>(student[i]) << endl;

    for(auto [x, y, z] : student)
        cout << x << " " << y << " " << z << endl;
    
    return 0;
}