class Solution {
public:
    int vis[51][51];
    
    int dfs(int x,int y,vector<vector<int>>& grid){
        if(x>=grid.size() || y>=grid[x].size() || !grid[x][y] || vis[x][y])
            return 0;
        vis[x][y]=1;
        
        return 1+dfs(x+1,y,grid)+dfs(x-1,y,grid)+dfs(x,y+1,grid)+dfs(x,y-1,grid);
        
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int mx=0;
        for(int i=0 ; i<grid.size() ; i++){
            for(int j=0 ; j<grid[i].size() ; j++)
                if(!vis[i][j]){
                    mx = max(mx,dfs(i,j,grid));
                }
            
        }
        return mx;
    }
};