#include <bits/stdc++.h>
using namespace std;

int main() {
    tuple<string, int, char> student = {"Akash", 3, 'A'};

    auto [x, y, z] = student;

    cout << x << " " << y << " " << z << endl;
    
    return 0;
}