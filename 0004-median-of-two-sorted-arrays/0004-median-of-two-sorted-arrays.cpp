class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size(), len2 =nums2.size();
        int mid = (len1+len2)/2;
    
        int f1=0,f2=0, m1=0, m2;
        
        
        while(f1+f2 <= mid){
            m2 = m1;
            if(f1==len1){
                m1=nums2[f2];
                f2++;
            }else if(f2==len2){
                m1=nums1[f1];
                f1++;
            }else if(nums1[f1] < nums2[f2]){
                m1=nums1[f1];
                f1++;
            }else{
                m1 = nums2[f2];
                f2++;
            }
        }
        
        
        if((len1+len2)%2==0)
            return (m1+m2)/2.0;
        
            else return m1;
    }
};