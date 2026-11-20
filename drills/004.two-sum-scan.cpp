#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {2, 7, 11, 15, 30};
    int target = 9;
    bool found = false;

    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                cout << "Pair indices: " << i << " and " << j << endl;
                cout << "Values: " << nums[i] << " + " << nums[j] << " = " << target << endl;
                found = true;
                break;
            }
        }
        if (found) {
            break;
        }
    }

    if (!found) {
        cout << "No pair found." << endl;
    }

    return 0;
}