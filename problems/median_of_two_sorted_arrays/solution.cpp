class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() < nums2.size()){
            return findMedianSortedArrays(nums2, nums1);
        }
        int middle = (nums1.size() + nums2.size()) / 2;
        if((nums1.size() + nums2.size()) % 2 == 0){
            return (findNth(nums1, nums2, middle) + findNth(nums1, nums2, middle + 1)) / 2.0; 
        }
        return findNth(nums1, nums2, middle + 1);
        
    }
    
    int findNth(vector<int>& nums1, vector<int>& nums2, int n){
        int twoStart = -1, twoEnd = nums2.size() - 1; 
        int oneMedian = n <= nums1.size() ? n - 1 : nums1.size() - 1; 
        int twoMedian = n <= nums1.size() ? -1 : n - nums1.size() - 1; 
        int nth = n <= nums1.size() ? nums1[oneMedian] : max(nums1[oneMedian], nums2[twoMedian]);
        while(twoEnd - twoStart > -1){
            if(oneMedian < -1 || nums2.size() - 1.0 < twoMedian){
                twoEnd = twoMedian - 1; 
            }
            else if(twoMedian < -1 || nums1.size() - 1.0 < oneMedian){
                twoStart = twoMedian + 1; 
            }
            else if(twoMedian < 0){
                nth = min(nums1[oneMedian], nth);
                twoStart = twoMedian + 1; 
            }
            else if(oneMedian < 0){
                nth = min(nums2[twoMedian], nth); 
                twoEnd = twoMedian - 1; 
            }
            else if(nums2[twoMedian] < nums1[oneMedian]){
                nth = min(nums1[oneMedian], nth);
                twoStart = twoMedian + 1; 
            }
            else if(nums1[oneMedian] <= nums2[twoMedian]){
                nth = min(nums2[twoMedian], nth);
                twoEnd = twoMedian - 1; 
            }
            oneMedian = oneMedian + twoMedian - (twoStart + twoEnd) / 2;
            twoMedian = (twoStart + twoEnd) / 2;
        }
        return nth;
    }
};