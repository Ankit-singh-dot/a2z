// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {

//         int n = nums.size();
//         int count = n / 2;

//         for(int i = 0; i < n; i++)
//         {
//             int counts = 0;

//             for(int j = 0; j < n; j++)
//             {
//                 if(nums[i] == nums[j])
//                     counts++;
//             }

//             if(counts > count)
//                 return nums[i];
//         }

//         return -1;
//     }
// };



class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int candidate = 0;
        int count = 0;

        for(int num : nums)
        {
            if(count == 0)
                candidate = num;

            if(num == candidate)
                count++;
            else
                count--;
        }

        return candidate;
    }
};