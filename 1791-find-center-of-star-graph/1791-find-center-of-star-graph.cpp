class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int f1 = edges[0][0], s1 = edges[0][1], f2 = edges[1][0], s2 = edges[1][1];
        
        if(f1 == f2 || f1 == s2)
            return f1;
        
        return s1; 
    }
};