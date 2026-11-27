#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> prefix = {2, 4, 6, 8, 10};
    int sum = 0;
    for(int i = 0; i < prefix.size(); i++){
        sum += prefix[i];
        num = prefix[i];
        cout << sum << " ";
    }
        // cout << sum;
        cout << endl;
    return 0;
}