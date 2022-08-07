class Solution {
public:    
    int vis[301][301];
    

    int numIslands(vector<vector<char>>& grid) {
        int sum=0;
        stack<pair<int,int>> s;
        for(int i=0 ; i<grid.size() ; i++){
            for(int j=0 ; j<grid[i].size() ; j++)
                if(!vis[i][j] && grid[i][j]=='1'){
                    sum++;
                    s.push({i,j});
                    while(!s.empty()){
                        int x = s.top().first,y = s.top().second;
                        s.pop();
                        if(x<0 || y<0 || x>grid.size()-1 || y>grid[x].size()-1 || vis[x][y] || grid[x][y]=='0')
                            continue;
                        
                        vis[x][y]=1;
                    
                        s.push({x+1,y});
                        s.push({x-1,y});
                        s.push({x,y+1});
                        s.push({x,y-1});
                    }
                }
        }
        return sum;

    }
};
