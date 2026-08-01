class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.empty()){
            return{};
        }
        if(intervals.size()==1){
            return intervals;
        }
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>result;
        result.push_back(intervals[0]);
        for(int i=1; i<intervals.size(); i++){
            vector<int>&lastAdded=result.back();
            if(intervals[i][0]<=lastAdded[1]){
                lastAdded[1]=max(lastAdded[1],intervals[i][1]);
                //result.push_back(lastAdded);
            }
            else{
                result.push_back(intervals[i]);
            }
        }
        return result;
    }
};