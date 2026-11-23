#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {10, 20, 30, 40, 50};
    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {
        int temp = nums[left];
        nums[left] = nums[right];
        nums[right] = temp;
        left++;
        right--;
    }

    cout << "Reversed: ";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
        
    }
    cout << endl;    

    return 0;
}