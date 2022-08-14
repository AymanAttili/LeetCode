class Solution {
public:
    int vis[501][501];
    int n,m,y=0;
    int dfs(int i,int j,vector<vector<int>>& v){
        if(i<0 || i==n || j<0 || j==m)
            return true;
        if(!v[i][j])
            return true;
        if(vis[i][j])
            return true;
        vis[i][j]=1;
        if(i==0 || i==n-1 || j==0 || j==m-1 && v[i][j])
            return false;
        
    
        y++;
        return dfs(i+1,j,v) & dfs(i-1,j,v) & dfs(i,j-1,v) & dfs(i,j+1,v);
        
    }
    
    int numEnclaves(vector<vector<int>>& v) {
        n=v.size();
        m=v[0].size();
        int x=0;
        for(int i=1 ; i<n-1 ; i++)
            for(int j=1 ; j<m-1 ; j++){
                if(v[i][j] && !vis[i][j]){
                    if(dfs(i,j,v))
                        x+=y;
                    y=0;
                }
            }
                
        return x;
    }
};