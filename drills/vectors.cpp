#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> nums = {4, 8, 15, 16, 23, 42, 56};
    for(
        int i = 0; i < nums.size(); i++){
        cout << "index " << i << "= " << nums[i] << endl;
        }
    return 0;
}