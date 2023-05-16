// author:  jacob curlin
// file:    lc/062.cpp
// date:    05/13/23

// Leetcode 62. Unique Paths


// first attempt: generic DFS, fails on time limit
// should be memoizing paths 
// second attempt (success): 
//  dp table size n (y axis)
//  traverse every cell in graph filling updating dp
//  only need single axis-size dp since we're basically sweeping across one axis on our inner loop
//  -> no need for storage of all path counts, can update as we go


class Solution {
public:
  int uniquePaths(int m, int n) {
    vector<int> dp(n,1);            // dp table
    
    for (int i=1; i<m; i++) {       // traverse x (1 -> m)
      for (int j=1; j<n; j++) {     // traverse y (1 -> n)
        dp[j] += dp[j-1];           // update dp table 
      }
    }
    return dp[n-1];                 
  }
};


// generic DFS
/*
  class Solution {
  public:
    int uniquePaths(int m, int n) {
      return dfs(0, 0, m, n);
    }


    int dfs(int x, int y, int m, int n) {
      int count = 0;

      if ((x == m-1) && (y == n-1)) {
        return 1;
      }

      if (x+1 < m) {
        count += dfs(x+1, y, m, n);
      } 

      if (y+1 < n) {
        count += dfs(x, y+1, m, n);
      } 

      return count;
    }

  }
*/
