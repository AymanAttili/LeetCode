class Solution {
public:
    int vis[101][101];
    int uniquePaths(int m, int n) {
        for(int i=1 ; i<=n ; i++)
            vis[m][i]=1;
        for(int i=1 ; i<=m ; i++)
            vis[i][n]=1;
        for(int i=m-1 ; i>0 ; i--){
            for(int j=n-1 ; j>0 ; j--){
                vis[i][j]=vis[i+1][j]+vis[i][j+1];
            }
        }
        return vis[1][1];
    }
};