#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {14, 3, 27, 8, 19, 1, 22};
    int max_val = nums[0];
    int min_val = nums[0];

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > max_val) {
            max_val = nums[i];
        }
        if (nums[i] < min_val) {
            min_val = nums[i];
        }
    }

    cout << "Max: " << max_val << endl;
    cout << "Min: " << min_val << endl;

    return 0;
}