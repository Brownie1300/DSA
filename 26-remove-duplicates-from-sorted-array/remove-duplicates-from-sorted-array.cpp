class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        /*
        if(nums.size() == 0) return 0;
        int officer = 0;
        int uniqueOrder = nums[0];
        int cm = officer +1;
        while(cm < nums.size()-1)
        {
            if(nums[cm] == nums[cm-1])
            {
                cm ++;
                continue;
            }
            else
            {
                
                nums[officer] = nums[cm];
                officer ++;
                cm ++; 
                uniqueOrder ++;
            }
            
        }
        for(int i=0;i<nums.size();i++)
        {
            return nums[i];
        }*/
         if (nums.empty()) return 0;

        int officer = 1;   // next position to place a unique value
        int cm = 1;        // scans the array

        while (cm < nums.size()) {
            if (nums[cm] != nums[officer - 1]) {   // found a new unique value
                nums[officer] = nums[cm];
                officer++;
            }
            cm++;          // always move to the next element
        }

        return officer;    // k = number of unique elements
    }
};