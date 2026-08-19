class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans = ans^i;
            ans = ans^nums[i];
        }
        ans = ans ^ nums.size(); // ye isliye kiya kyoki xor 0,1,2 tak he ho rha hai aur apne ko xor 0,1,2,3 tak krna hai to last wala 3 naa bachhe isliye uska xor bhi kr he diya 
        return ans;
    }
};