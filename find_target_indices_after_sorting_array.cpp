#include<iostream>
#include<vector>

using namespace std;

vector<int> targetIndices(vector<int>& nums,int n int target) {
        // std::size_t len=nums.size();
        std::vector<int> result;
        for(auto i=0u;i<n-1;i++){
            for(auto j=i+1u;j<n;j++){
                if(nums[i]>nums[j]){
                    swap(nums[i],nums[j]);
                }
            }
        }
        for(auto i=0u;i<n;i++){
            if(nums[i]==target){
                result.emplace_back(i);
            }
        }
        return result;
    }
}
int main() {
    int n, target;
    cin >> n>>target;

    int nums[n];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> arr = targetIndices(nums, n, target);

    cout << "Indices of words containing '" << target << "': ";
    for (int i : arr) {
        cout << i << " ";
    }

    return 0;
}

