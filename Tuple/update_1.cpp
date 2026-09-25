#include <bits/stdc++.h>
using namespace std;

int main() {
    tuple<string, int, char> student = {"Akash", 3, 'A'};
    auto [x, y, z] = student;

    x = "Raihan";

    cout << x << endl;
    
    return 0;
}