#include <iostream>
using namespace std;
#include <vector>

int main() {
    vector<int> nums = {12, 4, 27, 8, 19, 3, 27, 55};
    int max_val = nums[0]; 
    int greater_than_ten = 0;
    
    for(int i = 0; i < nums.size(); i++){
        if (nums[i] > max_val) {
            max_val = nums[i];
        }
        if (nums[i] > 10){
            greater_than_ten++;
        }
    }
    cout << "Max value: " << max_val << endl;
    cout << "Greater than ten: " << greater_than_ten << endl;
}
