#include <bits/stdc++.h>
using namespace std;

int main() {
    tuple<string, int, char> student = {"Akash", 3, 'A'};
    get<1>(student) = 1000;

    cout << get<1>(student);
    
    return 0;
}