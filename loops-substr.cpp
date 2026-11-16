#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "11111222223";
    int k = 3;

    // Slice the first k characters
    string first_group = s.substr(0, k);
    cout << first_group << endl;

    return 0;
}