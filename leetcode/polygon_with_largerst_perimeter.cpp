class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        if(nums.size()<3)
            return -1;
        // we will first sort the sides , find the sums till that point , and get the point where sum>point
        vector<long long> sums;
        sort(nums.begin(),nums.end());
        sums.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            sums.push_back(sums[i-1]+nums[i]);
        }
        for(int i=nums.size()-1;i>0;i--){
            if(sums[i-1]>nums[i]){
                return sums[i];
            }
        }
        return -1;
    }
};

/*

1 1 2 3 5  12 50
1 2 4 7 12 24 74 
*/
