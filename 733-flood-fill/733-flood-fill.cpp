class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int vis[51][51]{0};
        int c = image[sr][sc];
        queue<pair<int,int>>q;
        q.push({sr,sc});
        while(!q.empty()){
            int x=q.front().first,y=q.front().second;
            q.pop();
            if(vis[x][y] || image[x][y] != c)
                continue;
            vis[x][y]=1;
            image[x][y]=color;
            if(x<image.size()-1)
                q.push({x+1,y});            
            if(x>0)
                q.push({x-1,y});
            if(y<image[x].size()-1)
                q.push({x,y+1});
            if(y>0)
                q.push({x,y-1});
            
        }
        return image;
    }
};