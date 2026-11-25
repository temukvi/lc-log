#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {14, 3, 27, 8, 19, 1, 22};
    int max_num = nums[0];
    int min_num = nums[0];
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] > max_num){
            max_num = nums[i];
        }
        if(nums[i] < min_num){
            min_num = nums[i];
        }
    }
    cout << "Maximum number is: " << max_num << endl;
    cout << "Minimum number is: " << min_num << endl;
    return 0;
}