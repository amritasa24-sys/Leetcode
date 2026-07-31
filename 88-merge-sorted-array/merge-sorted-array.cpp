class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //sort(nums1.begin(),nums1.end());
        //sort(nums2.begin(),nums2.end());
        if(n==0){
            return;
        }
        if(m==0){
            nums1=nums2;
            return;
        }
        //for(int i=0; i<n; i++){
            //nums1.push_back(0);
        //}
        for(int i=((m+n)-1); i>=m; i--){
            nums1[i]=nums2[i-m];
        }
        sort(nums1.begin(),nums1.end());
    }
};