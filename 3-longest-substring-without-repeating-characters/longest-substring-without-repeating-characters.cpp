class Solution {
vector<string>addString;
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0){
            return 0;
        }
        int max=0;
        for(int i=0; i<s.length(); i++){
            string ans="";
            for(int j=i; j<s.length(); j++){
                if(ans.find(s[j])!=string::npos){
                    break;
                }
                else{
                    ans+=s[j];
                    if(ans.length()>max){
                        max=ans.length();
                    }
                }
            }
        }
        return max;
    }
};