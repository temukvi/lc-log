#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {10, 20, 30, 40, 50};
    cout << "Input: ";
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
        cout << endl;

        int left = 0;
        int right = nums.size() - 1;
        while(left < right){
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            left++;
            right--;
        }
        cout << "Reversed is: ";
        for(int i = 0; i < nums.size(); i++){
            int output = nums[i];
            cout << output << " ";
        }
        cout << endl;

            return 0;
    }

