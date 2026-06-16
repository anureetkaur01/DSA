class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
vector<vector<int>> flag(m, vector<int>(n, 1));
for(int p=0;p<m;p++){
    for(int q=0;q<n;q++){
        if(matrix[p][q]==0)
        flag[p][q]=0;
    }
}
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0 && flag[i][j]==0)
                {
                    //flag[i][j]=0;
                    for(int l=0;l<n;l++){
                        matrix[i][l]=0;
                       // flag[i][l]=0;
                    }
                    for(int k=0;k<m;k++){
                        matrix[k][j]=0;
                       // flag[k][j]=0;
                    }
                }
            }
        }
    }
};