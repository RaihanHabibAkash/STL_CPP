#include <bits/stdc++.h>
using namespace std;

int main() {
    tuple<string, int, char> student = {"Akash", 3, 'A'};

    cout << get<0>(student) << " " << get<1>(student) << " " << get<2>(student) << endl;
    
    return 0;
}