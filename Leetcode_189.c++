class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       if(k == 0) return;
       int n=nums.size();
       k=k%n;
       int left=0;
       int right=n-1;
       while(left<=right){
            swap(nums[right],nums[left]);
            left++;
            right--;
       } 
       left=0;
       right=k-1;
        while(left<=right){
            swap(nums[right],nums[left]);
            left++;
            right--;
        }
        left=k;
        right=n-1;
         while(left<=right){
            swap(nums[right],nums[left]);
            left++;
            right--;
         }
         return;
    }
};
