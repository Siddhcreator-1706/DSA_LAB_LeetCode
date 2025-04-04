class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> output(2);
        map<long long int, int> input;
        for(int i=0;i<nums.size();i++){
            if(input[target-nums[i]]){
                output[1]=i;
                output[0]=input[target-nums[i]]-1;
                return output;
            }
            input[nums[i]]=i+1;
        }
        return output;
    }
};
