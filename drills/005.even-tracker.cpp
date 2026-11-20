#include <iostream>
#include <vector>
using namespace std;
#include <string>

int main() {
    vector<int> nums = {5, 12, 8, 3, 14, 7, 2, 3};
    int even_count = 0;
    int even_sum = 0;
    for(int i = 0; i < nums.size(); i++){
        if (nums[i] % 2 == 0){
            even_sum += nums[i];
        }
        if (nums[i] % 2 == 0){
            even_count++;
        }
    }
            cout<< even_sum << endl;
            cout << even_count << endl;
    return 0;
}