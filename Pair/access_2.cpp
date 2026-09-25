#include <bits/stdc++.h>
using namespace std;

int main() {
    pair<string, int> student = {"Akash", 3};

    // Pair 1st element == x
    // Pair 2nd element == y

    auto [x, y] = student;

    cout << x << " " << y << endl;
    
    return 0;
}