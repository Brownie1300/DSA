class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
      //unordered_map<int,int> map; 
      int left = 0, right = (int)numbers.size() - 1;
        while (left < right) {                 // this guard prevents going out of bounds
            int sum = numbers[left] + numbers[right];
            if (sum == target) return {left + 1, right + 1};  // the answer is 1-indexed
            if (sum < target) left++;
            else right--;
        }
        return {};
    }
};