class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<bool>rows(m,false);
        vector<bool>column(n,false);
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j]==0){
                    rows[i]=true;
                    column[j]=true;
                }
            }
        }
        for(int i=0; i<m; i++){
            if(rows[i]==true){
                int p1=0;
                int p2=n-1 ;
                while(p1<=p2){
                    matrix[i][p1]=0;
                    matrix[i][p2]=0;
                    p1++;
                    p2--;
                }
            }
        }
        for(int j=0; j<n; j++){
            if(column[j]==true){
                int p1=0;
                int p2=m-1;
                while(p1<=p2){
                    matrix[p1][j]=0;
                    matrix[p2][j]=0;
                    p1++;
                    p2--;
                }
            }
        }
    }
};