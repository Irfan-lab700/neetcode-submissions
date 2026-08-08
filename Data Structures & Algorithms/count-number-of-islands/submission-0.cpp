class Solution {
public:
    void dfs(vector<vector<char>>&grid,int r, int c, int m , int n ){
        grid[r][c] = '0';
        if(r-1>=0 && grid[r-1][c] == '1')
            dfs(grid,r-1,c,m,n);
        if(r+1<m&& grid[r+1][c] == '1')
            dfs(grid,r+1,c,m,n);
        if (c - 1 >= 0 && grid[r][c - 1] == '1')
            dfs(grid, r, c - 1, m, n);

        if (c + 1 < n && grid[r][c+ 1] == '1')
            dfs(grid, r, c + 1, m, n);


    }
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int cnt = 0;
        for(int r  = 0;r<m;r++){
            for(int c = 0;c<n;c++){
                if(grid[r][c] == '1'){
                    cnt++;
                    dfs(grid,r,c,m,n);
                }

            }
        }
        return cnt;

        
    }
};
