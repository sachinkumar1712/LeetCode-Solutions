class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        for(int i=0;i<n2;i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        int n = n1+n2;
         if(n%2!=0) return nums1[n/2];
         else{
            double ans = (nums1[(n/2)-1]+nums1[n/2])/2.0;
            return ans;
         }     

    }
};