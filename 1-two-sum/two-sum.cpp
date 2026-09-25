class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // if vector is sort then use this and index we have to print so two pointer not working here 
        /* 
        int i = 0;
        int j = nums.size() - 1;
        std::sort(nums.begin(), nums.end()); 
        while(i < j)
        {
            
            cout << nums[i] << endl;
        cout << nums[j] << endl;
            int sum = nums[i]+nums[j];
            if(target == sum)
            { 
                return {i,j};
            }
            if(target < sum)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return {-1,-1};
        */
        unordered_map<int, int> map;
        for (int i=0;i <nums.size(); i++)
        {
            int remaining = target - nums[i];
            if(map.find(remaining) != map.end())
            {
                return {map[remaining],i};
            }
            map[nums[i]] = i;
        }
        return {-1,-1};
    }
};