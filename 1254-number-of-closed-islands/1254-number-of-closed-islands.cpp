class Solution {
public:
    int vis[101][101];
    
    bool dfs(int x,int y,vector<vector<int>>& v){
        if(v[x][y] || vis[x][y])
            return true;
        if(x==0 || y==0 || x>=v.size()-1 || y>=v[x].size()-1)
            return false;
        
        vis[x][y]=1;
        return dfs(x+1,y,v) & dfs(x-1,y,v) & dfs(x,y+1,v) & dfs(x,y-1,v);
    }
    
    int closedIsland(vector<vector<int>>& grid) {
        int sum=0;
        for(int i=1 ; i<grid.size()-1 ; i++)
            for(int j=1 ; j<grid[i].size()-1 ; j++){
                if(!grid[i][j] && !vis[i][j]){
                    if(dfs(i,j,grid))
                        sum++;
                }
            }
        return sum;
        }
};