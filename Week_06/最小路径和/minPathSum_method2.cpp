class Solution {
public:
    //记忆化递归
    int minPathSum(vector<vector<int>>& grid) {
        if(grid.size() == 0 || grid[0].size() == 0) return 0;
        int row = grid.size() - 1, col = grid[0].size() - 1;
        vector<vector<int>> rec(row + 1, vector<int>(col +1, -1));
        return countMinPath(row, col, rec, grid);
    }

    int countMinPath(int row, int col,vector<vector<int>> &rec, vector<vector<int>>& grid)
    {
        if(row < 0 || col < 0) return -1;
        if(row == 0 && col == 0)
            return grid[col][row];
        
        //已记录，直接返回
        if(rec[row][col] != -1) return rec[row][col];

        //drill down
        int row_count = countMinPath(row - 1, col, rec, grid);
        int col_count = countMinPath(row, col - 1, rec, grid);

        //根据边界条件求最小值
        if(row_count != -1 && col_count != -1)
            rec[row][col] = min(row_count, col_count) + grid[row][col];
        else if(row_count != -1)
            rec[row][col] = row_count + grid[row][col];
        else
            rec[row][col] = col_count + grid[row][col];
        
        return rec[row][col];
    }   
};