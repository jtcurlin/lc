// author:  jacob curlin 
// file:    lc/027.cpp
// date:    05/14/23

// Leetcode 27. Remove Element

// Notes:

class Solution 
{
  public:
    int removeElement(vector<int>& nums, int val) 
    {

      int k = 0;
      for (int i = 0; i<nums.size(); i++)     // iterate through integer array
      {
        if (nums[i] != val)                   // if current number not equal to our value
        {
          nums[k++] = nums[i];                // add move it to front & increment front ptr
        }
      }
      return k;
    }
};
