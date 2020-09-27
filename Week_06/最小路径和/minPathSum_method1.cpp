class Solution {
public:
	//动态规划，从后往前递推dp[i][j] = min(dp[i + 1][j],dp[i][j + 1])，注意边界条件判断
    int minPathSum(vector<vector<int>>& grid) {
        if(grid.size() == 0 || grid[0].size() == 0) return 0;

        int m = grid.size();
        int n = grid[0].size();

        for(int i = m - 1; i >= 0; --i)
            for(int j = n - 1; j >= 0; --j)
            {
                if(i == m - 1 && j == n - 1) continue;		//最重点，直接跳过
                else if(i == m - 1) grid[i][j] = grid[i][j + 1] + grid[i][j];	//最后一行递推
                else if(j == n - 1) grid[i][j] = grid[i + 1][j] + grid[i][j];	//最后一列递推
                else grid[i][j] = min(grid[i + 1][j], grid[i][j + 1]) + grid[i][j];	//正常递推
            }        
            return grid[0][0];
    }
};