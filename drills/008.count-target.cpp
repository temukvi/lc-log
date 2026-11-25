#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {4, 7, 2, 7, 9, 7, 1};
    int target = 7;
    int matched_numbers = 0;
    for(int i = 0; i < nums.size(); i++){
        if(target == nums[i]){
            matched_numbers++;
        }
    }
    cout << "Total of matched numbers: " << matched_numbers << endl;
    return 0;
}