class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        int length = nums.size(), cumuSum[100001], sum=0;
        
        cumuSum[0] = 0;
        for(int i=1 ; i<length-1 ; i++){
            int cur = 1;
            if((nums[i]+nums[i-1])%2 && (nums[i]+nums[i+1])%2)
                cur=0;
            sum+=cur;
            cumuSum[i]=sum;
            
        }
        
        
        int queriesLength = queries.size();
        vector<bool> result;
        for(int i=0 ; i<queriesLength ; i++){
            bool curBool = false;
            int left = queries[i][0], right = queries[i][1];
            if(left == right)
                curBool = true;
            else if(left+1 == right)
                curBool = (nums[left]+nums[right])%2 == 1;

            else{
                int cur = cumuSum[right-1]-cumuSum[left];
                cur += (nums[left]+nums[left+1])%2 ? 0 : 1;   
                cur += (nums[right]+nums[right-1])%2 ? 0 : 1;
                    
                curBool = cur==0;
            }
            
            
            result.push_back(curBool);
        }
        
        
        return result;
    }
};