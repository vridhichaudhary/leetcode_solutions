#include <iostream>
#include <vector>
using namespace std;

int firstPosition(vector<int>& nums, int &target){
        int n = nums.size();
        int start = 0, end  = n - 1;
        int ans = -1;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(nums[mid] == target){
                ans = mid;
                //this can be the possible firstIdx 
                //but we are not sure so keep on searching
                //towards left of mid
                end = mid - 1;
            }else if(target > nums[mid]){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
        }
        return ans;
    }

    int lastPosition(vector<int>& nums, int &target){
        int n = nums.size();
        int start = 0, end  = n - 1;
        int ans = -1;
        while(start <= end){
            int mid = start + (end - start) / 2;
            if(nums[mid] == target){
                //this can be the possible last Index
                //but we are not sure so keep on searching
                //towards right of mid
                ans = mid;
                start = mid + 1;
            }else if(target > nums[mid]){
                start = mid + 1;
            }else{
                end = mid - 1;
            }
        }
        return ans;
    }
   

vector<int> searchRange(vector<int>& nums, int target) {
    int first = firstPosition(nums, target);
    if(first == -1){
        return {-1, -1};
    }
    int last = lastPosition(nums, target);
    return {first, last};
}

int main(){
  
    int n, target;
    cin >> n >> target;
    vector<int> nums(n);
    for(int i = 0; i < n; ++i){
        cin >> nums[i];
    }
    vector<int> output = searchRange(nums, target);
    for(int i = 0; i < output.size(); ++i){
        cout << output[i] << " ";
    }
    
}

